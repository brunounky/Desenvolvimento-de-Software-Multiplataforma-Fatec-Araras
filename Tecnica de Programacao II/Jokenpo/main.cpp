#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int op, opPC;
	
	cout << endl << "Jokenpo Fatec Araras" << endl;
	cout << endl << "Escolha uma das opções a seguir:" << endl;
	cout << "1 - Pedra" << endl;
	cout << "2 - Papel" << endl;
	cout << "3 - Tesoura" << endl;
	cin >> op;
	
	if (op == 1){
		cout << endl << "Voce escolheu Pedra";
	}if (op == 2){
		cout << endl << "Voce escolheu Papel";
	}if (op == 3){
		cout << endl << "Voce escolheu Tesoura";
	}
	
	
	opPC = rand() % 3;
	
	if (opPC == 1){
		cout << endl << "Computador escolheu Pedra";
	}if (opPC == 2){
		cout << endl << "Computador escolheu Papel";
	}if (opPC == 3){
		cout << endl << "Computador escolheu Tesoura";
	}
	
	cout << endl;
	
	if (op == 1 and opPC == 1){
		cout << endl << "Não temos um vencedor, jogue dnv";
		cout << endl << "Tanto o computador quanto voce escolheram pedra";
	}
	if (op == 1 and opPC == 2){
		cout << endl << "Computador venceu";
		cout << endl << "Papel embrulha pedra";
	}
	if (op == 1 and opPC == 3){
		cout << endl << "Voce venceu";
		cout << endl << "pedra esmaga tesoura";
	}
	if (op == 2 and opPC == 1){
		cout << endl << "Voce venceu";
		cout << endl << "Papel embrulha pedra";
	}
	if (op == 2 and opPC == 2){
		cout << endl << "Não temos um vencedor, jogue dnv";
		cout << endl << "Tanto o computador quanto voce escolheram papel";
	}
	if (op == 2 and opPC == 3){
		cout << endl << "Computador venceu";
		cout << endl << "Tesoura corta papel";
	}
	if (op == 3 and opPC == 1){
		cout << endl << "Computador venceu";
		cout << endl << "Pedra esmaga tesoura";
	}
	if (op == 3 and opPC == 2){
		cout << endl << "Voce venceu";
		cout << endl << "Tesoura corta papel";
	}
	if (op == 3 and opPC == 3){
		cout << endl << "Não temos um vencedor, jogue dnv";
		cout << endl << "Tanto o computador quanto voce escolheram tesoura";
	}
	
	return 0;
}
