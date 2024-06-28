#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 2 - Exercício 1 NAO ESTA FUNCIONANDO


using namespace std;

struct contaCorrente{
	                      
	char nome[30];
	int cpf;
	float valorConta;
	
};

//void ordenar(contaCorrente Contas[]){

	
//}

void cadastrarContas(){
	
	int i;
	contaCorrente Contas[5]; //vetor para cadastrar no novo tipo

for(i=1; i<=5; i++){
		
	cout << "_______________________________________________________________" << endl;
	
	cout << "Informe um nome para a criação de uma nova conta bancária: " << i << endl;
	cin >> Contas[i].nome;
	
	cout << endl;
	
	cout << "Informe o CPF do novo correntista: " << i << endl;
	cin >> Contas[i].cpf;
	
	cout << endl;
	
	cout << "Informe o valor inicial dessa conta: " << i << endl;
	cin >> Contas[i].valorConta;
	
	cout << endl;
	
	}
	
//	ordenar(Contas);
	
		for(i=1; i <=5; i++){
		
		cout << "______________________________________________" << endl;
		cout << "Nome do correntista " << i << " : " << Contas[i].nome << endl;
		cout << "CPF do correntista " << i << " : " << Contas[i].cpf << endl;
		cout << "Valor na conta do correntista " << i << " : " << "R$" << Contas[i].valorConta << endl; 
		
	}
	
	int aux[5];
	float trans[5], trans1[5];
	
	for(i=1; i<=5; i++ ){
		for(trans1[i]=trans[i]+1; trans1[i]<10; i++){
			if(trans[i]>trans1[i]){
				aux[i] = i;
				trans[i] = trans1[i];
				trans1[i] = aux[i];
			}
		}
	}
	
	for(i=1; i<=5; i++){
		cout << trans[i] << endl;
	}
	
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Banco Fatec Araras" << endl;
	
	cadastrarContas();
		
	return 0;
}
