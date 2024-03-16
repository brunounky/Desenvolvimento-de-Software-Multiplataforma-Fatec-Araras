#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Vetor para armazenar as op��es
    string opcoes[] = {"Pedra", "Papel", "Tesoura", "Lagarto", "Spock"};
    
    // Semente para gera��o de n�meros aleat�rios
    srand(time(0));

    cout << "Jogo Pedra, Papel, Tesoura, Lagarto e Spock" << endl;
    cout << "Escolha uma opcao:" << endl;
    cout << "1. Pedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tesoura" << endl;
    cout << "4. Lagarto" << endl;
    cout << "5. Spock" << endl;
    cout << "Sua escolha: ";
    
    // Vari�veis para armazenar a escolha do jogador e do computador
    int jogadorEscolha, computadorEscolha;
    cin >> jogadorEscolha;

    // Gerar a escolha do computador (um n�mero aleat�rio entre 0 e 4)
    computadorEscolha = rand() % 5;

    // Mostrar as escolhas do jogador e do computador
    cout << "Voc� escolheu " << opcoes[jogadorEscolha - 1] << "." << endl;
    cout << "O computador escolheu " << opcoes[computadorEscolha] << "." << endl;

    // Determinar o vencedor
    int diferenca = (jogadorEscolha - 1 - computadorEscolha + 5) % 5;
    if (diferenca == 0) {
        cout << "Empate!" << endl;
    } else if (diferenca == 1 || diferenca == 2) {
        cout << "Voc� ganhou!" << endl;
    } else {
        cout << "Voc� perdeu!" << endl;
    }

    return 0;
}
