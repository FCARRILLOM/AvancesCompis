#ifndef QUAD_H
#define QUAD_H

#include <string>
#include <iostream>
#include <vector>

#include "CuboSemantico.h"
#include "MapaMemoria.h"
#include "TablasDatos.h"

class Quad {
private:
    CuboSemantico cubo;
    MapaMemoria *memoria;
    TablasDatos *tablasDatos;

    // vectores que simulan Stacks
    std::vector<std::string> sOperators;
    std::vector<std::string> sOperands;
    std::vector<std::string> sTypes;
    std::vector<int> sJumps;

    // stack que guarda el conteo de temporales utilizadas en cada contexto
    std::vector<int> sTemps;

    // stack que guarda la los tipos de los temporales utilizados en cada contexto
    std::vector<std::vector<int>> sTempTypes;

    // vector que simula Queue donde se guardan los quadruplos generados
    std::vector<std::vector<std::string>> quads;

    // quads con espacios de memoria
    std::vector<std::vector<std::string>> memQuads;

    // contador que apunta al siguiente quad
    int quadPtr;

    // guarda los resultados de cada expresion para cada dimensiones [EXP]
    std::vector<std::string> resultadosDimensiones;

    std::string currentArrayVariable;

    std::string currentArrayScope;

    // adds a quad to quad list and increments quad counter
    void addQuad(const std::vector<std::string> quad);

    // parse pointer variable and get its address (x) -> (1000)
    std::string getPointerAddress(const std::string pointerAddress);

    // removes two operands and a binary arithmetic operator to generate quad, ex. +, A, B, t1
    void addArithmeticQuad();

    // removes one operand and an assign operator, ex. =, A, -, B
    void addAssignQuad();

    // retorna siguiente valor disponible e incrementa el contador del avail
    std::string getNextAvail(const std::string type);

    // fills an existing Goto quad with a pending position
    void fillGotoQuad(int position, int newValue);

    // looks for values address in memory
    std::string getVariableAddress(const std::string name);

    // writes out intermediate code in obj file
    void generateIntermediateCode();

public:

    Quad(TablasDatos &tablasDatos, MapaMemoria &memoria) {
        this->tablasDatos = &tablasDatos;
        this->memoria = &memoria;
        quadPtr = 0;
    }

    // elimina los datos previos de los stacks y vector de quadruplos para empezar el proceso de nuevo
    // TODO: delete unused function?
    void clearQuad();

    // REGLAS ARITMETICAS tomadas del documento Exp PN and Quad, donde se describen las reglas para generar los cuadruplos
    // de las expresiones aritmeticas
    // 1
    void addOperand(const std::string name);

    // 2
    void addOperatorPlusMinus(const std::string op);

    // 3
    void addOperatorMultDiv(const std::string op);

    // 4
    void removeFromStackPlusMinus();

    // 5
    void removeFromStackMultDiv();

    // 6
    void addFalseBottom();

    // 7
    void removeFalseBottom();

    // 8
    void addOperatorRel(const std::string op);

    // 9
    void removeFromStackRel();

    // 10
    void addOperatorAnd(const std::string op);

    // 11
    void addOperatorOr(const std::string op);

    // 12
    void removeFromStackAnd();

    // 13
    void removeFromStackOr();

    // 14
    void addOperatorAsig(const std::string op);

    // 15
    void removeFromStackAssign();

    // ACCESO ARREGLOS
    // 2
    void verifyArrayDimensions();

    // 3
    void getArrayDimensionResult();

    // 4
    void addArrayQuads();

    // CONSTANTES
    // 1
    void addConstOperand(const std::string value, const std::string type);

    // LECTURA Y ESCRITURA
    // 16
    void addRead(const std::string name);

    // 17
    void addWriteExp();

    // 18
    void addWriteStr(const std::string const_string);

    // DECISIONES
    // 1
    void addGotoIf();

    // 2
    void addDecisionEnd();

    // 3
    void addGotoElse();

    // CONDICIONALES
    // 1
    void addWhileCheckpoint();

    // 2
    void addGotoWhile();

    // 3
    void addConditionalEnd();

    void printData();

    // NO CONDICIONALES
    // 1
    void addLoopCounter(const std::string counterId);

    // 2
    void addLoopLimit();

    // 3
    void addGotoFor();

    // 4
    void addNonConditionalEnd(const std::string counterId);

    // FUNCIONES
    // 7
    void addEndFunc();

    // 2
    void generateEra(const std::string funcId);

    // 3
    void generateParameter(const std::string argument, const std::string paramArg);

    // 6
    void addGoSub(const std::string funcId, int quadLoc);

    // RETORNO FUNCIONES
    // 1
    void saveReturnValue(const std::string returnValue);

    // 2
    void addReturnValue(const std::string funcId, const std::string returnType);

    // MAIN
    // 1
    void savePrincipalLoc();

    // 3
    void addGotoPrincipalLoc();

    // UTILITY
    // Utility for tabla simbolos (verifying parameter types)
    std::string popOperand();

    std::string popType();

    int getQuadCont() const;

    void addNewTempCounter();

    std::vector<int> getCurrentTempTypes();

};

#endif