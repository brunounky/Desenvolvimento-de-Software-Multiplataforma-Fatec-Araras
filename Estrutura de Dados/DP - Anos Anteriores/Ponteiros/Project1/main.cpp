#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

struct aluno {
    int id;
    string nome;
    int semestreInicio;
    int anoInicio;
    string curso;
};

aluno* newAluno = 0; // Ponteiro para armazenar os alunos
int contAluno = 0; // Contador de alunos

void cadastroAluno() {
    aluno* temp = new aluno[contAluno + 1]; // Alocando um novo array temporário com espaço para um aluno a mais
    
    cout << "Informe o primeiro nome do Aluno: " << endl;
    cin >> temp[contAluno].nome;
    cout << "Informe o semestre de inicio na Fatec: " << endl;
    cin >> temp[contAluno].semestreInicio;
    cout << "Informe o ano de inicio na Fatec: " << endl;
    cin >> temp[contAluno].anoInicio;
    cout << "Informe o curso da Fatec (DSM ; SI ; GE): " << endl;
    cin >> temp[contAluno].curso;

    newAluno = temp; // Atualizando o ponteiro para o novo array de alunos
    contAluno++; // Incrementando o contador de alunos

    cout << "Aluno cadastrado com sucesso." << endl;
}

void exportarTXTalunos() {
    // Implemente a lógica para exportar os dados dos alunos para um arquivo de texto
    cout << "Função de exportação de alunos para TXT ainda não implementada." << endl;
}

void menu() {
    int opMenu;

    do {
        cout << "___________ Turma do Cafe - Fatec Araras ___________" << endl;
        cout << "Digite a opcao desejada: " << endl;
        cout << "___________________ ALUNOS ___________________" << endl;
        cout << "1 - Inserir um novo aluno" << endl;
        cout << "2 - Editar dados de um contribuente já cadastrado" << endl;
        cout << "3 - Importar TXT com os dados dos alunos" << endl;
        cout << "4 - Exportar TXT com os dados dos alunos" << endl;
        cout << "0 - Para finalizar o programa" << endl << endl;
        cin >> opMenu;

        switch (opMenu) {
            case 1:
                cadastroAluno();
                break;
            case 4:
                exportarTXTalunos();
                break;
            case 0:
                cout << "Programa finalizado." << endl;
                break;
            default:
                cout << "Informe uma opção válida dentre as possibilidades." << endl;
                break;
        }

    } while (opMenu != 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    menu();

    delete[] newAluno; // Liberando a memória alocada dinamicamente antes de sair do programa

    return 0;
}

