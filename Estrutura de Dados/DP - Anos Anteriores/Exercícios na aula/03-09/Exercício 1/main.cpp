#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <cmath>
using namespace std;

struct funcionario{
	char nome[50];
	char cargo[50];
	float *salario=NULL;
};

int main() {
	
	setlocale (LC_ALL, "Portuguese");
		
	struct funcionario bruno;
	struct funcionario *s = NULL;
	s = &bruno;
	
	
	strcpy(bruno.nome, "Bruno Campagnol de Oliveira");
	strcpy(bruno.cargo, "Gerente");
	s->salario = 5500;
	
	cout << (*s).nome << "possui o cargo de: " << bruno.cargo << endl;
	cout << "Salário: " <<  << endl;
	
	

	return 0;
}
