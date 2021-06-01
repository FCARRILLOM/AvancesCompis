#ifndef MAPA_MEMORIA_H
#define MAPA_MEMORIA_H

#include <unordered_map>
#include <string>
#include <vector>

class MapaMemoria {
private:
    // Posiciones e indices de mapa de memoria
    int globalStart, globalSize,
        localStart, localSize,
        constStart, constSize;

    int globalInt, globalFloat, globalChar, globalObj,
        globalTempInt, globalTempFloat, globalTempBool,
        globalTypeSize = 2000,
        globalTempSize = 3000;

    int localInt, localFloat, localChar, localObj,
        localTempInt, localTempFloat, localTempBool,
        localTypeSize = 2000,
        localTempSize = 3000;

    int constInt, constFloat, constChar,
        constTypeSize = 3000;

    // Estructura de memoria
    int globalIntMemory = 0;
    int globalFloatMemory = 0;
    int globalCharMemory = 0;
    // object memory??
    int globalTempIntMemory = 0;
    int globalTempFloatMemory = 0;
    int globalTempBoolMemory = 0;

    int localIntMemory = 0;
    int localFloatMemory = 0;
    int localCharMemory = 0;
    // object memory??
    int localTempIntMemory = 0;
    int localTempFloatMemory = 0;
    int localTempBoolMemory = 0;

    int constIntMemory = 0;
    int constFloatMemory = 0;
    int constCharMemory = 0;

public:
    MapaMemoria();

    int reserveIntMemory(std::string scope, bool temp, int size);

    int reserveFloatMemory(std::string scope, bool temp, int size);

    int reserveCharMemory(std::string scope, int size);

    int reserveBoolMemory(std::string scope);

    void resetLocalMemory();

    void printData();

};

#endif