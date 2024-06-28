#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>
#include <cstring>

//Lista 1 - Exercício 3

using namespace std;

void verifica(int conj[], float final){
	
	int i;
	float j=0;
	
	for(i=0; i<10; i++){
		if(final==conj[i]){
			cout << "o valor da posição " << i+1 << " é igual a média de todos os conjuntos" << endl;
		}else{
			j=1;
		}
	}
	
	if(j==1){
		cout << endl;
		cout << "Nenhum dos outros valores inseridos é igual ao valor da média" << endl;
	}
	
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float soma, final;
	int i, conj[10];
	
	cout << "EXERCÍÍO 3" << endl;
	
	for(i = 0; i<10; i++){
		cout << "Informe o valor " << i+1 << " : " << endl;
		cin >> conj[i];
		
		soma=soma+conj[i];
	}
	
		final=soma/10;

		cout << endl << "A média dos conjuntos é: " << final << endl;
		
	verifica(conj, final);
			
	
	return 0;
}
