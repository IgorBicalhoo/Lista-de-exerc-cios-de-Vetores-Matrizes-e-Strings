#include <iostream>

int main() {
    int vetor[5];
    int somaImpares = 0;


    std::cout << "Digite 5 numeros inteiros:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> vetor[i];
    }

    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 != 0) {
            somaImpares += vetor[i];
        }
    }


    std::cout << "A soma dos elementos impares eh: " << somaImpares << std::endl;

    return 0;
}
