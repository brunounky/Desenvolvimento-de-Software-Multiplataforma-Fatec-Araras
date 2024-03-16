#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "Portuguese");
	using namespace std;
	
	struct Estudante{
		string nome_completo;
		int idade;
		float media_final;
	};
	
	Estudante *new_aluno;
	
	new_aluno = new Estudante;
	
	cout << endl << "Informe o nome completo do aluno " << endl;
	cin >> new_aluno->nome_completo;
	
	cout << endl << "Digite a idade do aluno " << endl;
	cin >> new_aluno->idade;
	
	cout << "Informe a média final do aluno " << endl;
	cin >> new_aluno->media_final;
	
	
	return 0;
}
