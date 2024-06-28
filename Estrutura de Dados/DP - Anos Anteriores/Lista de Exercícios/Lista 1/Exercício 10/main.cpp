#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 1 - Exercício 10

using namespace std;

void verificaImparPar(int num){
	
	//Verifica se é ímpar ou se é par
	if(num % 2 == 0){
		cout << endl << num << " é par" << endl;
	}else{
		cout << endl << num << " é ímpar" << endl;
	}
}

void verificaPrimo(int num){
	
	int i;
	int qtdDivisao=0;
	
	for(i=1; i <= num; i++){
		if(num % i == 0){
			qtdDivisao++;	
		}
	}
	
	if(qtdDivisao==2){
		cout << endl << num << " é primo" << endl;
	}else{
		cout << endl << num << " não é primo" << endl;
	}
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Informe um número inteiro" << endl;
	cin >> num;
	
	verificaImparPar(num);
	verificaPrimo(num);
	
	
	return 0;
}
