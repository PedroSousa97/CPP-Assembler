#include <iostream>
#include <fstream>
#include <stdlib.h>     
#include <time.h>
#include <string>
#include <locale.h>
#include <bitset>
#include "Functions.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int instnmbr;

	cout << "			Pepe-8 computer Assembler for the Instruction memory" << endl << endl;
	cout << "Welcome to the Assembly decoder. Convert your Assembly program instructions into an OPCODE/Register/Constant" << endl;
	cout<<"(machine code)."<<endl; 
	cout << "It can be directly copied to the Instructuions Memory that you want to program." << endl << endl;
	cout << "To begin I need to know. How many instructions do you have in your program? Tell me and then hit ENTER." << endl;
	cin >> instnmbr;
	cout << "" << endl;
	cout << "Ok! we are good to go." << endl;
	cout << "For the following steps you just need to select what is your next Assembly Program Instruction." << endl << endl;
	string * instructs = new string[instnmbr];
	
	for (int i = 0; i < instnmbr; i++)
	{	
		int choice;

		cout << "Choose (with its number) one of the Assembly instructions bellow. Follow your program order!" << endl;
		cout << "1->LDPRi		2->STPRA	3->LDRi,constant	4->LDRi,[constant]		5->ST[constant],RA" << endl;
		cout << "6->ADD RA,RB	  7->SUB RA,RB		8->AND RA,RB		9->OR RA,RB			10->XOR RA,RB" << endl;
		cout << "11->CMP RA,RB	  12->JGconstant	 13->JGEconstant	14->JEconstant			15->JLEconstant" << endl;
		cout << "16->JLconstant	  17->JMPconstant	 18->JN RA,constant	19->JZ RA,constant		20->NOP" << endl;
		cout << "In Case of instructions with 'Ri', that is the regist to be chosen in next steps" << endl;
		cin >> choice;
		cout << "" << endl<<endl;
		MachineCodeFunction(instructs, i, choice);
	}
	cout << "Machine Code ready! Paste it on your machine code adresses." << endl << endl;
	for (int i = 0; i < instnmbr; i++) {
		cout << instructs[i] << endl;
	}

	system("PAUSE");
	return 0;
	cin.sync();
	cin.get();
}










