#ifndef TABLAS_DATOS_H
#define TABLAS_DATOS_H

#include <unordered_map>
#include <string>
#include <vector>

struct ArrNode {
   int size;
   int m;
};

struct VarEntry {
   std::string varName;
   std::string varType;
   int memoryAddr;
   std::vector<ArrNode> arrNodes;
};

struct FuncEntry {
   std::string funcName;
   std::string returnType;

   // signature of parameter types
   std::vector<std::string> parameterTable;

   // number of local variables {int, float, char, obj}
   std::vector<int> numLVar;

   // number of temporal variables {int, float, -char-, bool}
   std::vector<int> numTemp; 

   // quad counter where it begins
   int quadCont;

   std::unique_ptr<std::unordered_map<std::string, VarEntry>> varDir;
};

struct ClassTable {

};

class TablasDatos {
public:
   // directorio de funciones
   std::unordered_map<std::string, FuncEntry> funcDir;

   // tablas de constantes
   std::unordered_map<std::string, int> constDir;

   std::string currentFunc = "main";

   std::string programName = "";
};

#endif