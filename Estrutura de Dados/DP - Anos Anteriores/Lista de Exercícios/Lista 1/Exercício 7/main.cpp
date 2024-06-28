#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 1 - Exercício 7

using namespace std;

int calculo(int vetor[]){
	
	int final;
	float convertido;
	
	final = vetor[1] * 3;
	final = final + (vetor[2]*vetor[2]);
	final = final + (vetor[3]*vetor[3]);
	final = final + (vetor[4]*vetor[4]);
	
	convertido = (float) final; //converter int para float
	
	cout << endl << convertido << endl;

}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[4];
	
	cout << "Exercicio 7" << endl;
	
	cout << "____________________________________________" << endl;
	
	for(i=1; i<=4; i++){
		
		cout << "Informe o valor número: " << i << endl;
		cin >> vetor[i];
		
	}
	
	calculo(vetor);
	
	
	
	return 0;
}
