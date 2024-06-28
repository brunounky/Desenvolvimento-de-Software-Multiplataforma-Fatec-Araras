#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 2 - Exercício 2


using namespace std;

struct dataAniversario{
	
	int dia, mes, ano;
	
};

struct dadosAniversario{
	
	dataAniversario dtAniv;
	char nome[30];
	
};

void cadastroAniversario(){
	
	dadosAniversario DadosAniv[5];
	int i; 
	
	for(i=1; i<=5; i++){
		
	cout << "____________________________________________" << endl;
	
	cout << "Informe o nome da pessoa: " << i << endl;
	cin >> DadosAniv[i].nome;
	
	cout << "Informe o dia do nascimento da pessoa: " << i << endl;
	cin >> DadosAniv[i].dtAniv.dia;

	cout << "Informe o mes do nascimento da pessoa: " << i << endl;
	cin >> DadosAniv[i].dtAniv.mes;
	
	cout << "Informe o ano do nascimento da pessoa: " << i <<endl;
	cin >> DadosAniv[i].dtAniv.ano;
		
	}
	
	for(i=1; i<=5; i++){
		
		cout << DadosAniv[i].nome << endl;
		cout << DadosAniv[i].dtAniv.dia << endl;
		cout << DadosAniv[i].dtAniv.mes << endl;
		cout << DadosAniv[i].dtAniv.ano << endl;
	}
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Cadastramento de aniversários" << endl;
	
	cadastroAniversario();
	
	
	
	return 0;
}
