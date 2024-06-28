#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>
#include <cstring>

//Lista 1 - Exercício 5

using namespace std;

void verificacao(char nome[], char sobrenome[]){

	int teste, tam;

	teste = strcmp(nome, sobrenome);
	
	if(teste == -1){ //nome maior que sobrenome
		
		cout << endl <<"Resultado esperado: " << endl;
		
		strcat(nome, sobrenome);
		puts(nome);
		
	}
	if(teste == 0){
		
		cout << endl << "Resultado esperado: " << endl;
		
		strcat(nome, sobrenome);
		puts(nome);
		
		tam = strlen(nome);
		cout << endl << "O tamanho do nome com o sobrenome é: " << tam << endl;
		
	}
	if(teste == 1){ //sobrenome maior que nome
		
		cout << endl << "Resultado esperado: " << endl;
		
		strcat(sobrenome, nome);
		puts(sobrenome);

	}
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], sobrenome[30];
	
	cout << "Exercício 5" << endl;
	
	cout << "__________________________________________" << endl;
	
	cout << "Informe seu nome(somente letras minúsculas): " << endl;
	cin >> nome;
	cout << "Informe um único sobrenome(somente letras minúsculas): " << endl;
	cin >> sobrenome;
	
	verificacao(nome, sobrenome);
	
	
	return 0;
}
