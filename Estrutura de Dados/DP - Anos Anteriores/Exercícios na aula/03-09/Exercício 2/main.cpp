#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

struct Pessoa{
	char nome[30];
	char sexo[10];
	float *idade=NULL;
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num=0;
	struct Pessoa *p1=NULL,  *p2=NULL, *p3=NULL;
	
	cout << "Teste" << endl;
	cin >> num;
	
	p1 = (Pessoa*)malloc(num * sizeof(Pessoa));	
	p2 = (Pessoa*)malloc(num * sizeof(Pessoa));	
	p3 = (Pessoa*)malloc(num * sizeof(Pessoa));	
	
	for(int i=0; i<num; i++)
	{
		cout << "nome da pessoa: " << endl;
		cin >> p1[i].nome;
		cout << "sexo da pessoa: " << endl;
		cin >> p1[i].sexo;
	}
	
	return 0;
}
