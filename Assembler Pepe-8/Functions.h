#pragma once

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>

using namespace std;

string LDPRI(int registo);
string STPRA();
string LDRIConst(int registo, string constante);
string LDRImConst(int registo, string constante);
string STmConstRA(string constante);
string ADDRARB();
string SUBRARB();
string ANDRARB();
string ORRARB();
string XORRARB();
string CMPRARB();
string JGConst(string constante);
string JGEConst(string constante);
string JEConst(string constante);
string JLEConst(string constante);
string JLConst(string constante);
string JMPConst(string constante);
string JNRAConst(string constante);
string JZRAConst(string constante);
string NOP();
string DecimalToBinary(int constante);
void MachineCodeFunction(string array[], int position, int choice);

#endif