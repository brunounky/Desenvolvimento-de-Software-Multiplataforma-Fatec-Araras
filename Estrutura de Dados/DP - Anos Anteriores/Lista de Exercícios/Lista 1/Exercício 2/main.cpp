#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>
#include <cstring>

//Lista 1 - Exercício 2

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	double quant[10];
	
	cout << "CORRETOR DE PREÇOS" << endl;
	
	for(i = 1; i<=10; i++){
		cout << "Informe o valor do produto " << i << endl;
		cin >> quant[i];
	}
	
	for(i = 1; i<=10; i++){
		cout << "O valor do produto: " << i << " corrigido pela inflação é de: " << (quant[i]/100*15)+quant[i] << endl;
	}
	
	return 0;
}
