#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int MAX_NOME_TAMANHO = 50;
const int MAX_NOMES = 10;

int main() {
    string nomes[MAX_NOMES];
    string menorNome = "";

    cout << "Informe até " << MAX_NOMES << " nomes (ou pressione Enter para sair):" << endl;

    for (int i = 0; i < MAX_NOMES; i++) {
        getline(cin, nomes[i]);

        if (nomes[i].empty()) {
            break;
        }

        if (menorNome.empty() || nomes[i] < menorNome) {
            menorNome = nomes[i];
        }
    }

    if (!menorNome.empty()) {
        cout << "O nome lexicograficamente menor é: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi informado." << endl;
    }

    return 0;
}
