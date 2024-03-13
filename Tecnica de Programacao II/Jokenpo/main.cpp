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
	cout << "4 - Lagarto" << endl;
	cout << "5 - Spock" << endl;
	cin >> op;
	
	if (op == 1){
		cout << endl << "Voce escolheu Pedra";
	}if (op == 2){
		cout << endl << "Voce escolheu Papel";
	}if (op == 3){
		cout << endl << "Voce escolheu Tesoura";
	}if (op == 4){
		cout << endl << "Voce escolheu Lagarto";
	}if (op == 5){
		cout << endl << "Voce escolheu Spock";
	}
	
	
	opPC = rand() % 5;
	
	if (opPC == 1){
		cout << endl << "Computador escolheu Pedra";
	}if (opPC == 2){
		cout << endl << "Computador escolheu Papel";
	}if (opPC == 3){
		cout << endl << "Computador escolheu Tesoura";
	}if (opPC == 4){
		cout << endl << "Computador escolheu Lagarto";
	}if (opPC == 5){
		cout << endl << "Computador escolheu Spock";
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
	if (op == 1 and opPC == 4){
		cout << endl << "Voce venceu";
		cout << endl << "pedra esmaga lagarto";
	}
	if (op == 1 and opPC == 5){
		cout << endl << "Voce venceu";
		cout << endl << "Spock vaporiza pedra";
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
	if (op == 2 and opPC == 4){
		cout << endl << "Computador venceu";
		cout << endl << "Lagarto come papel";
	}
	if (op == 2 and opPC == 5){
		cout << endl << "Voce venceu";
		cout << endl << "Papel refuta spock";
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
	if (op == 3 and opPC == 4){
		cout << endl << "Voce venceu";
		cout << endl << "Tesoura decapta lagarto";
	}
	if (op == 3 and opPC == 5){
		cout << endl << "Computador venceu";
		cout << endl << "Spock derrete tesoura";
	}
	
	
	
	if (op == 4 and opPC == 1){
		cout << endl << "Computador venceu";
		cout << endl << "Pedra esmaga lagrato";
	}
	if (op == 4 and opPC == 2){
		cout << endl << "Voce venceu";
		cout << endl << "Lagarto come papel";
	}
	if (op == 4 and opPC == 3){
		cout << endl << "Computador venceu";
		cout << endl << "Tesoura decapta lagarto";
	}
	if (op == 4 and opPC == 4){
		cout << endl << "Não temos um vencedor, jogue dnv";
		cout << endl << "Tanto o computador quanto voce escolheram tesoura";
	}
	if (op == 4 and opPC == 5){
		cout << endl << "Voce venceu";
		cout << endl << "Lagarto envenena spock";
	}
	
	
	if (op == 5 and opPC == 1){
		cout << endl << "Voce venceu";
		cout << endl << "Spock vaporiza pedra";
	}
	if (op == 5 and opPC == 2){
		cout << endl << "Computador venceu";
		cout << endl << "Papel refuta spock";
	}
	if (op == 5 and opPC == 3){
		cout << endl << "Voce venceu";
		cout << endl << "Spock derrete tesoura";
	}
	if (op == 5 and opPC == 4){
		cout << endl << "Computador venceu";
		cout << endl << "Lagarto envenena spock";
	}
	if (op == 5 and opPC == 5){
		cout << endl << "Não temos um vencedor, jogue dnv";
		cout << endl << "Tanto o computador quanto voce escolheram tesoura";
	}
	return 0;
}
