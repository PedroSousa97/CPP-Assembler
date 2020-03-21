#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <bitset>

using namespace std;

string LDPRI(int registo) {
	string machinecode = "00000" + std::to_string(registo) + "xxxxxxxx";
	return machinecode;
}

string STPRA() {
	string machinecode = "000010xxxxxxxx";
	return machinecode;
}

string LDRIConst(int registo, string constante) {
	string machinecode = "00010" + std::to_string(registo) + constante;
	return machinecode;
}

string LDRImConst(int registo, string constante) {
	string machinecode = "00011" + std::to_string(registo) + constante;
	return machinecode;
}

string STmConstRA(string constante) {
	string machinecode = "001000" + constante;
	return machinecode;
}

string ADDRARB() {
	string machinecode = "001010xxxxxxxx";
	return machinecode;
}

string SUBRARB() {
	string machinecode = "001100xxxxxxxx";
	return machinecode;
}

string ANDRARB() {
	string machinecode = "001110xxxxxxxx";
	return machinecode;
}

string ORRARB() {
	string machinecode = "010000xxxxxxxx";
	return machinecode;
}

string XORRARB() {
	string machinecode = "010010xxxxxxxx";
	return machinecode;
}

string CMPRARB() {
	string machinecode = "01010xxxxxxxxx";
	return machinecode;
}

string JGConst(string constante) {
	string machinecode = "01011x" + constante;
	return machinecode;
}

string JGEConst(string constante) {
	string machinecode = "01100x" + constante;
	return machinecode;
}

string JEConst(string constante) {
	string machinecode = "01101x" + constante;
	return machinecode;
}

string JLEConst(string constante) {
	string machinecode = "01110x" + constante;
	return machinecode;
}

string JLConst(string constante) {
	string machinecode = "01111x" + constante;
	return machinecode;
}

string JMPConst(string constante) {
	string machinecode = "10000x" + constante;
	return machinecode;
}

string JNRAConst(string constante) {
	string machinecode = "100010" + constante;
	return machinecode;
}

string JZRAConst(string constante) {
	string machinecode = "100100" + constante;
	return machinecode;
}

string NOP() {
	string machinecode = "xxxxxxxxxxxxxx";
	return machinecode;
}

string DecimalToBinary(int constante) {
	std::string binary = std::bitset<8>(constante).to_string();
	return binary;
}

void MachineCodeFunction(string array[], int position, int choice) {
	if (choice == 1) {
		int registo;
		cout << "What is the regist you want to use? (A->0/B->1) " << endl;
		cin >> registo;
		cout << "" << endl;
		array[position] = LDPRI(registo);
	} if (choice == 2) {
		array[position] = STPRA();
	}if(choice == 3){
		int registo;
		int constante;
		cout << "What is the regist you want to use? (A->0/B->1) " << endl;
		cin >> registo;
		cout << "" << endl;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = LDRIConst(registo, binary);
	}if (choice == 4) {
		int registo;
		int constante;
		cout << "What is the regist you want to use? (A->0/B->1) " << endl;
		cin >> registo;
		cout << "" << endl;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = LDRImConst(registo, binary);
	}
	if (choice == 5) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = STmConstRA(binary);
	}
	if (choice == 6) {
		array[position] = ADDRARB();
	}if (choice == 7) {
		array[position] = SUBRARB();
	}if (choice == 8) {
		array[position] = ANDRARB();
	}if (choice == 9) {
		array[position] = ORRARB();
	}if (choice == 10) {
		array[position] = XORRARB();
	}if (choice == 11) {
		array[position] = CMPRARB();
	}if (choice == 12) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JGConst(binary);
	}if (choice == 13) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JGEConst(binary);
	}if (choice == 14) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JEConst(binary);
	}if (choice == 15) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JLEConst(binary);
	}if (choice == 16) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JLConst(binary);
	}if (choice == 17) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JMPConst(binary);
	}if (choice == 18) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JNRAConst(binary);
	}if (choice == 19) {
		int constante;
		cout << "What is the constant of the instruction? (Decimal I will convert it)" << endl;
		cin >> constante;
		cout << "" << endl;
		string binary = DecimalToBinary(constante);
		array[position] = JZRAConst(binary);
	}
	if (choice == 20) {
		array[position] = NOP();
	}
}
