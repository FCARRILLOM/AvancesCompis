#include <iostream>

#include "Memoria.h"

Memoria::Memoria() {
    // Calcula los indices iniciales de cada espacio de memoria y su tamano total
    // GLOBAL start indexes
    globalStart = 0;
    globalInt = globalStart;
    globalFloat = globalInt + globalTypeSize;
    globalChar = globalFloat + globalTypeSize;
    globalTempInt = globalChar + globalTypeSize;
    globalTempFloat = globalTempInt + globalTempSize;
    globalTempBool = globalTempFloat + globalTempSize;

    globalSize = globalTempBool + globalTempSize - globalStart;

    // LOCAL start indexes
    localStart = globalStart + globalSize;
    localInt = localStart;
    localFloat = localInt + localTypeSize;
    localChar = localFloat + localTypeSize;
    localTempInt = localChar + localTypeSize;
    localTempFloat = localTempInt + localTempSize;
    localTempBool = localTempFloat + localTempSize;

    localSize = localTempBool + localTempSize - localStart;

    // CONST start indexes
    constStart = localStart + localSize;
    constInt = constStart;
    constFloat = constInt + constTypeSize;
    constChar = constFloat + constTypeSize;

    constSize = constChar + constTypeSize - constStart;
}

void Memoria::generateERAConst(const std::map<std::string, std::string> &constTable) {
    // TODO: check if size is bigger than memory limit
    int i = 0, f = 0, c = 0;
    int loc;
    //std::cout << "CONST\n";
    for (auto entry : constTable) {
        loc = stoi(entry.first);
        if (loc >= constInt && loc < constFloat) {
            i++;
            constIntMemory.push_back(stoi(entry.second));
        } else if (loc >= constFloat && loc < constChar) {
            f++;
            constFloatMemory.push_back(stof(entry.second));
        } else if (loc >= constChar) {
            c++;
            constCharMemory.push_back(entry.second[0]);
        }
    }
}

void Memoria::generateERAMain(const std::vector<int> &numLVar, const std::vector<int> &numTemp) {
    int i, f, c, ti, tf, tb;
    i = numLVar[0];
    f = numLVar[1];
    c = numLVar[2];
    ti = numTemp[0];
    tf = numTemp[1];
    tb = numTemp[2];

    // TODO: check if size is bigger than memory limit
    if (i > 0) globalIntMemory.resize(i);
    if (f > 0) globalFloatMemory.resize(f);
    if (c > 0) globalCharMemory.resize(c);
    if (ti > 0) globalTempIntMemory.resize(ti);
    if (tf > 0) globalTempFloatMemory.resize(tf);
    if (tb > 0) globalTempBoolMemory.resize(tb);
}

void Memoria::generateERAFunc(const std::vector<int> &numLVar, const std::vector<int> &numTemp) {
    int i, f, c, ti, tf, tb;
    i = numLVar[0];
    f = numLVar[1];
    c = numLVar[2];
    ti = numTemp[0];
    tf = numTemp[1];
    tb = numTemp[2];

    // TODO: check if size is bigger than memory limit
    sOffsets[0].push_back(localIntMemory.size());
    if (i > 0) {
        std::vector<int> tempInt(i, -1);
        localIntMemory.insert(localIntMemory.end(), tempInt.begin(), tempInt.end());
    }

    sOffsets[1].push_back(localFloatMemory.size());
    if (f > 0) {
        std::vector<float> tempFloat(f, -1);
        localFloatMemory.insert(localFloatMemory.end(), tempFloat.begin(), tempFloat.end());
    }

    sOffsets[2].push_back(localCharMemory.size());
    if (c > 0) {
        std::vector<char> tempChar(c, 'a');
        localCharMemory.insert(localCharMemory.end(), tempChar.begin(), tempChar.end());
    }

    sOffsets[3].push_back(localTempIntMemory.size());
    if (ti > 0) {
        std::vector<int> tempTInt(ti, -1);
        localTempIntMemory.insert(localTempIntMemory.end(), tempTInt.begin(), tempTInt.end());
    }

    sOffsets[4].push_back(localTempFloatMemory.size());
    if (tf > 0) {
        std::vector<float> tempTFloat(tf, -1);
        localTempFloatMemory.insert(localTempFloatMemory.end(), tempTFloat.begin(), tempTFloat.end());
    }

    sOffsets[5].push_back(localTempBoolMemory.size());
    if (tb > 0) {
        std::vector<bool> tempTBool(tb, false);
        localTempBoolMemory.insert(localTempBoolMemory.end(), tempTBool.begin(), tempTBool.end());
    }
}

void Memoria::removeERAFunc(const std::vector<int> &numLVar, const std::vector<int> &numTemp) {
    int i, f, c, ti, tf, tb;
    i = numLVar[0];
    f = numLVar[1];
    c = numLVar[2];
    ti = numTemp[0];
    tf = numTemp[1];
    tb = numTemp[2];
    
    sOffsets[0].pop_back();
    if (localIntMemory.size() > 0 && i > 0)
        localIntMemory.erase(localIntMemory.end() - i);

    sOffsets[1].pop_back();
    if (localFloatMemory.size() > 0 && f > 0)
        localFloatMemory.erase(localFloatMemory.end() - f);

    sOffsets[2].pop_back();
    if (localCharMemory.size() > 0 && c > 0)
        localCharMemory.erase(localCharMemory.end() - c);

    sOffsets[3].pop_back();
    if (localTempIntMemory.size() > 0 && ti > 0)
        localTempIntMemory.erase(localTempIntMemory.end() - ti);

    sOffsets[4].pop_back();
    if (localTempFloatMemory.size() > 0 && tf > 0)
        localTempFloatMemory.erase(localTempFloatMemory.end() - tf);

    sOffsets[5].pop_back();
    if (localTempBoolMemory.size() > 0 && tb > 0)
        localTempBoolMemory.erase(localTempBoolMemory.end() - tb);
}

std::string Memoria::getAddressType(const std::string address) {
    if (address[0] == '"') return "string";

    int loc;
    if (address[0] == '(') {
        // todos los pointers guardan datos tipo int
        std::string strippedAddress = stripPointerAddress(address);
        int finalAddress = getIntValue(strippedAddress);
        loc = finalAddress;
    } else {
        loc = stoi(address);
    }

    // globales
    if (loc >= globalInt && loc < globalFloat) return "int";
    else if (loc >= globalFloat && loc < globalChar) return "float";
    else if (loc >= globalChar && loc < globalTempInt) return "char";
    else if (loc >= globalTempInt && loc < globalTempFloat) return "int";
    else if (loc >= globalTempFloat && loc < globalTempBool) return "float";
    else if (loc >= globalTempBool && loc < localStart) return "bool";

    // locales
    if (loc >= localInt && loc < localFloat) return "int";
    else if (loc >= localFloat && loc < localChar) return "float";
    else if (loc >= localChar && loc < localTempInt) return "char";
    else if (loc >= localTempInt && loc < localTempFloat) return "int";
    else if (loc >= localTempFloat && loc < localTempBool) return "float";
    else if (loc >= localTempBool && loc < constStart) return "bool";

    // const
    if (loc >= constInt && loc < constFloat) return "int";
    else if (loc >= constFloat && loc < constChar) return "float";
    else if (loc >= constChar && loc < constStart + constSize) return "char";
    
    return "ERROR";
}

int Memoria::getIntValue(const std::string address) {
    int loc;
    if (address[0] == '(') {
        // todos los pointers guardan datos tipo int
        std::string strippedAddress = stripPointerAddress(address);
        int finalAddress = getIntValue(strippedAddress);
        loc = finalAddress;
    } else {
        loc = stoi(address);
    }

    if (loc >= globalInt && loc < globalFloat) { // global
        std::cout << "GLOBAL INT\n";
        std::cout << loc << " - " << globalInt << "\n";
        std::cout << globalIntMemory.size() << "\n";
        if (loc - globalInt > globalIntMemory.size()) {std::cout << "ERROR accesing global int memory\n"; return -1; }
        return globalIntMemory[loc - globalInt];

    } else if (loc >= globalTempInt && loc < globalTempFloat) { // global temp
        if (loc - globalTempInt >= globalTempIntMemory.size()) { std::cout << "ERROR accesing global temp int memory\n"; return -1; }
        return globalTempIntMemory[loc - globalTempInt];

    } else if (loc >= localInt && loc < localFloat) { // local
        int currentOffset = sOffsets[0][sContextos.back()];

        if (loc - localInt >= localIntMemory.size() - currentOffset) {std::cout << "ERROR accesing local int memory\n"; return -1; }
        int relativePos = loc - localInt + currentOffset;
        return localIntMemory[relativePos];

    } else if (loc >= localTempInt && loc < localTempFloat) { // local temp
        int currentOffset = sOffsets[3][sContextos.back()];

        if (loc - localTempInt >= localTempIntMemory.size() - currentOffset) {std::cout << "ERROR accesing local temp int memory\n"; return -1; }
        int relativePos = loc - localTempInt + currentOffset;
        return localTempIntMemory[relativePos];

    } else if (loc >= constInt && loc < constFloat) { // const
        if (loc - constInt >= constIntMemory.size()) {std::cout << "ERROR accesing const int memory\n"; return -1; }
        return constIntMemory[loc - constInt];
    }

    return -1;
}

float Memoria::getFloatValue(const std::string address) {
    int loc = stoi(address);

    if (loc >= globalFloat && loc < globalChar) { // global
        if (loc - globalFloat >= globalFloatMemory.size()) {std::cout << "ERROR accesing global Float memory\n"; return -1; }
        return globalFloatMemory[loc - globalFloat];

    } else if (loc >= globalTempFloat && loc < globalTempBool) { // global temp
        if (loc - globalTempFloat >= globalTempFloatMemory.size()) { std::cout << "ERROR accesing global temp Float memory\n"; return -1; }
        return globalTempFloatMemory[loc - globalTempFloat];

    } else if (loc >= localFloat && loc < localChar) { // local
        int currentOffset = sOffsets[1][sContextos.back()];

        if (loc - localFloat >= localFloatMemory.size() - currentOffset) {std::cout << "ERROR accesing local Float memory\n"; return -1; }
        int relativePos = loc - localFloat + currentOffset;
        return localFloatMemory[relativePos];

    } else if (loc >= localTempFloat && loc < localTempBool) { // local temp
        // TODO: BUG cuando corro  params.txt?
        int currentOffset = sOffsets[4][sContextos.back()];
        std::cout << "LOCAL TEMP\n";
        std::cout << loc << " - " << localTempFloat << "\n";
        std::cout << localTempFloatMemory.size() << " - "  << currentOffset << "\n";

        if (loc - localTempFloat >= localTempFloatMemory.size() - currentOffset) {std::cout << "ERROR accesing local temp Float memory\n"; return -1; }
        int relativePos = loc - localTempFloat + currentOffset;
        return localTempFloatMemory[relativePos];

    } else if (loc >= constFloat && loc < constChar) { // const
        if (loc - constFloat >= constFloatMemory.size()) {std::cout << "ERROR accesing const Float memory\n"; return -1; }
        return constFloatMemory[loc - constFloat];
    }

    return -1;
}

char Memoria::getCharValue(const std::string address) {
    return 'a';
}

bool Memoria::getBoolValue(const std::string address) {
    int loc = stoi(address);

    if (loc >= globalTempBool && loc < localInt) { // global temp
        if (loc - globalTempBool >= globalTempBoolMemory.size()) { std::cout << "ERROR accesing global temp Bool memory\n"; return -1; }
        return globalTempBoolMemory[loc - globalTempBool];

    } else if (loc >= localTempBool && loc < constInt) { // local temp
        int currentOffset = sOffsets[5][sContextos.back()];

        if (loc - localTempBool >= localTempBoolMemory.size() - currentOffset) {std::cout << "ERROR accesing local temp Bool memory\n"; return -1; }
        int relativePos = loc - localTempBool + currentOffset;
        return localTempBoolMemory[relativePos];
    }

    return -1;
}

void Memoria::saveIntValue(int value, const std::string address) {
    int loc;
    if (address[0] == '(') {
        std::string strippedAddress = stripPointerAddress(address);
        int finalAddress = getIntValue(strippedAddress);
        loc = finalAddress;
    } else {
        loc = stoi(address);
    }

    if (loc >= globalInt && loc < globalFloat) { // global
        if (loc - globalInt >= globalIntMemory.size()) {std::cout << "ERROR saving global int memory\n"; return; }
        globalIntMemory[loc - globalInt] = value;

    } else if (loc >= globalTempInt && loc < globalTempFloat) { // global temp
        if (loc - globalTempInt >= globalTempIntMemory.size()) { std::cout << "ERROR saving global temp int memory\n"; return; }
        globalTempIntMemory[loc - globalTempInt] = value;

    } else if (loc >= localInt && loc < localFloat) { // local
        int currentOffset = sOffsets[0][sContextos.back()];

        if (loc - localInt >= localIntMemory.size() - currentOffset) {std::cout << "ERROR saving local int memory\n"; return; }
        int relativePos = loc - localInt + currentOffset;
        localIntMemory[relativePos] = value;

    } else if (loc >= localTempInt && loc < localTempFloat) { // local temp
        int currentOffset = sOffsets[3][sContextos.back()];

        if (loc - localTempInt >= localTempIntMemory.size() - currentOffset) {std::cout << "ERROR saving local temp int memory\n"; return; }
        int relativePos = loc - localTempInt + currentOffset;
        localTempIntMemory[relativePos] = value;

    } else if (loc >= constInt && loc < constFloat) { // const
        if (loc - constInt >= constIntMemory.size()) {std::cout << "ERROR saving const int memory\n"; return; }
        constIntMemory[loc - constInt] = value;
    }
}

void Memoria::saveFloatValue(float value, const std::string address) {
    int loc = stoi(address);

    if (loc >= globalFloat && loc < globalChar) { // global
        if (loc - globalFloat >= globalFloatMemory.size()) {std::cout << "ERROR saving global Float memory\n"; return; }
        globalFloatMemory[loc - globalFloat] = value;

    } else if (loc >= globalTempFloat && loc < globalTempBool) { // global temp
        if (loc - globalTempFloat >= globalTempFloatMemory.size()) { std::cout << "ERROR saving global temp Float memory\n"; return; }
        globalTempFloatMemory[loc - globalTempFloat] = value;

    } else if (loc >= localFloat && loc < localChar) { // local
        int currentOffset = sOffsets[1][sContextos.back()];

        if (loc - localFloat >= localFloatMemory.size() - currentOffset) {std::cout << "ERROR saving local Float memory\n"; return; }
        int relativePos = loc - localTempFloat + currentOffset;
        localFloatMemory[relativePos] = value;

    } else if (loc >= localTempFloat && loc < localTempBool) { // local temp
        int currentOffset = sOffsets[4][sContextos.back()];

        if (loc - localTempFloat >= localTempFloatMemory.size() - currentOffset) {std::cout << "ERROR saving local temp Float memory\n"; return; }
        int relativePos = loc - localTempFloat + currentOffset;
        localTempFloatMemory[relativePos] = value;

    } else if (loc >= constFloat && loc < constChar) { // const
        if (loc - constFloat >= constFloatMemory.size()) {std::cout << "ERROR saving const Float memory\n"; return; }
        constFloatMemory[loc - constFloat] = value;
    }
}

void Memoria::saveCharValue(char value, const std::string address) {

}

void Memoria::saveBoolValue(bool value, const std::string address) {
    int loc = stoi(address);

    if (loc >= globalTempBool && loc < localInt) { // global temp
        if (loc - globalTempBool >= globalTempBoolMemory.size()) { std::cout << "ERROR saving global temp Bool memory\n"; return; }
        globalTempBoolMemory[loc - globalTempBool] = value;

    } else if (loc >= localTempBool && loc < constInt) { // local temp
        int currentOffset = sOffsets[5][sContextos.back()];

        if (loc - localTempBool >= localTempBoolMemory.size() - currentOffset) {std::cout << "ERROR saving local temp Bool memory\n"; return; }
        int relativePos = loc - localTempBool + currentOffset;
        localTempBoolMemory[relativePos] = value;
    }
}

void Memoria::saveParameterIntValue(int value, int parameterOffset) {
    int loc = localInt + parameterOffset;

    if (loc - localInt > localIntMemory.size() - sOffsets[0].back()) {std::cout << "ERROR saving local int param memory\n"; return; }
    int relativePos = loc - localInt + sOffsets[0].back();
    localIntMemory[relativePos] = value;

    /* delete
    std::cout << "LOCAL MEMORY:\n";
    std::cout << parameterOffset << std::endl;
    std::cout << loc - localInt << " >= " << localIntMemory.size() << "-" << sOffsets[0].back() << std::endl;
    for (int val : localIntMemory) {
        std::cout << val << ", ";
    }
    */
}
void Memoria::saveParameterFloatValue(float value, int parameterOffset) {
    int loc = localFloat + parameterOffset;

    if (loc - localFloat >= localFloatMemory.size() - sOffsets[1].back()) {std::cout << "ERROR saving local float param memory\n"; return; }
    int relativePos = loc - localFloat + sOffsets[1].back();
    localFloatMemory[relativePos] = value;
}

void Memoria::saveParameterCharValue(char value,int parameterOffset) {
    int loc = localChar + parameterOffset;

    if (loc - localChar >= localCharMemory.size() - sOffsets[0].back()) {std::cout << "ERROR saving local char param memory\n"; return; }
    int relativePos = loc - localChar + sOffsets[0].back();
    localCharMemory[relativePos] = value;
}

std::string Memoria::stripPointerAddress(const std::string pointerAddress) {
    std::string parsedAddress = pointerAddress;
    parsedAddress.pop_back();
    parsedAddress.erase(0, 1);
    return parsedAddress;
}