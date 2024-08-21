#include <iostream>

using namespace std;

int main() {
    int numElementos;
    cout << "Informe o número de elementos (até 10): ";
    cin >> numElementos;

    if (numElementos < 1 || numElementos > 10) {
        cout << "Numero de elementos invalido!" << endl;
        return 1;
    }

    int vetor[numElementos];
    cout << "Informe os " << numElementos << " elementos:" << endl;
    for (int i = 0; i < numElementos; i++) {
        cin >> vetor[i];
    }

    int maior1 = vetor[0];
    int maior2 = vetor[0];
    for (int i = 1; i < numElementos; i++) {
        if (vetor[i] > maior1) {
            maior2 = maior1;
            maior1 = vetor[i];
        } else if (vetor[i] > maior2 && vetor[i] != maior1) {
            maior2 = vetor[i];
        }
    }

    int somaParesImpares = 0;
    for (int i = 0; i < numElementos; i++) {
        if (i % 2 != 0 && vetor[i] % 2 == 0) {
            somaParesImpares += vetor[i];
        }
    }

    cout << "Os 2 maiores elementos sao: " << maior1 << " e " << maior2 << endl;
    cout << "A soma dos elementos pares em posicoes impares é: " << somaParesImpares << endl;

    return 0;
}
