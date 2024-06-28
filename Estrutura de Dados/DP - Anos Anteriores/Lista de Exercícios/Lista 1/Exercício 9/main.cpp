#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 1 - Exercício 9

using namespace std;

int verificadorMaMe(int i, float vetor[10]){
	
	setlocale(LC_ALL, "Portuguese");

	float maior;	
	float menor = vetor[1];

	for(i=0; i<=10; i++){
		if(vetor[i]>maior){
			
			maior=vetor[i];
			
		}if(menor>vetor[i]){
			
			menor=vetor[i];
			
		}
	}
	
	cout << "O maior numero é: " << maior << endl;
	cout << "O menor numero é: " << menor << endl;
	
	return 0;
}

int main() {
	
	cout << "Informe os 10 valores para compor o vetor: " << endl;
	
	float vetor[10];
	int i;
	
	for(i=0; i<=10; i++){
		cin >> vetor[i];
	}
	
	verificadorMaMe(i, vetor);
	
	return 0;
}
