#include <cstdlib>
#include <locale>

uusing namespace std;

int main(){
	
	int i, tam = 3;
	
	struct data{
		
		int dia;
		int mes;
		int ano;
		
	};
	
	struct membros{
		char nome[50];
		struct data nasc;
		float mensalidade;
		int dependentes;
	};
	
	struct membros clube[tam];
	
	for(i=0; i<3; i++){
		
		cin.ignore();
		cout << "Informe o nome: " << endl;
		cin.getline(clube[i].nome, 50);
		cout << "Informe o dia do nascimento: " << endl;
		cin clube[i].nasc.dia;
		cout << "Informe o mes do nascimento: " << endl;
		cin clube[i].nasc.mes;
		cout << "Informe o ano do nascimento: " << endl;
		cin clube[i].nasc.ano;
		cout << "Informe o valor da mensalidade: " << endl;
		cin clube[i].mensalidade;
		cout << "Informe a quantide de dependentes: " << endl;
		cin clube[i].dependentes;
		
	};
	
	
	
}
