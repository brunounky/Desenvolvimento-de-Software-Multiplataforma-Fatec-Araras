#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 1 - Exercício 6

using namespace std;

int fibonacci(int d){
	
	int antD = 0;
	int i, aux;
	
	cout << "A sequência é: " << endl << d << endl;
	
	for(i=1; i<15; i++){
		
		cout << d+antD << endl;
		
		aux = antD;
		antD = d;
		d = d + aux;
		
	}
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int d=1;
	
	fibonacci(d);
	
	return 0;
}
