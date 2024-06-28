#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 2 - Exercício 3


using namespace std;

struct parPontos1{
	
	double x,y;
	
};

struct parPontos2{
	
	double x,y;
	
};

double calculoDistancia(){
	
	parPontos1 ParPont1;
	parPontos2 ParPont2;
	double cat1, cat2, elev1, elev2, soma, raiz;
	
	cout << endl << "Informe o valor de X do ponto 1: " << endl;
	cin >> ParPont1.x;

	cout << endl << "Informe o valor de Y do ponto 1: " << endl;
	cin >> ParPont1.y;
	
	cout << endl << "Informe o valor de X do ponto 2: " << endl;
	cin >> ParPont2.x;
	
	cout << endl << "Informe o valor de X do ponto 2: " << endl;
	cin >> ParPont2.y;
	
	cat1 = ParPont2.x - ParPont1.x;
	cat2 = ParPont2.y - ParPont1.y;
	
	elev1 = cat1 * cat1;
	elev2 = cat2 * cat2;	
	
	soma = elev1 + elev2;
	
	raiz = sqrt(soma);
	
	cout << endl << "A distância entre os dois pontos é: " << raiz << endl;
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Cálculo da distância entre os pontos" << endl;
	
	calculoDistancia();
	
	return 0;
}
