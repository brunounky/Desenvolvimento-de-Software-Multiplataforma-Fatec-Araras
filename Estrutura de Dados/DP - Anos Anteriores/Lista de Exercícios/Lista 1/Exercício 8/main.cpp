#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 1 - Exercício 8

using namespace std;

float crescente(float vetor[]){
	
	int i;

	cout << "Ordenação de forma crescente dos números digitados: " << endl;
	
	for(i=0; i<10; i++){
		
		cout << vetor[i] << endl;
		
	}
	
	return vetor[i];
	
}

float decrescente(float vetor[]){
	
	int i;
	
	cout << "Ordenação de forma decrescente dos números digitados: " << endl;
	
	for(i=9; i>-1; i--){
		
		cout << vetor[i] << endl;
		
	}
	
	return vetor[i];
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float vetor[10];
	int i, resp, j, aux;
	
	cout << "Informe os 10 valores desejados: " << endl;
	
	for(i=0; i<10; i++){
		cin >> vetor[i];
	}	
	
	cout << endl << "Você deseja ordenar de forma crescente ou decrescente? " << endl;
	cout << "1 - Crescente" << endl;
	cout << "2 - Decrescente" << endl;
	cin >> resp;
	
		for(j=10-1; j>=1; j--){
			for(i=0; i<j; i++){
				if(vetor[i] > vetor[i+1]){
					aux = vetor[i];
					vetor[i] = vetor[i+1];
					vetor[i+1] = aux;
				}
			}
		}
	
	if(resp==1){
		
		crescente(vetor);
		
	}else{
		if(resp==2){
		
		decrescente(vetor);
		
		}else{
		cout << "Resposta fora do esperado" << endl;
		}
	}
	
	return 0;
}
