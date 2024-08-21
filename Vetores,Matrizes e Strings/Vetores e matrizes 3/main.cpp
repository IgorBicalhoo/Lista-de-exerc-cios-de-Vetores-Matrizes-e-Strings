#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numAlunos = 5;
    float notas[numAlunos];
    float media;
    float desvioMedia[numAlunos];
    float desvioQuadrado[numAlunos];
    float variancia;
    float desvioPadrao;

    cout << "Digite as notas dos 5 alunos:" << endl;
    for (int i = 0; i < numAlunos; i++) {
        cout << "Aluno " << i + 1 << ": ";
        cin >> notas[i];
    }

    media = 0.0;
    for (int i = 0; i < numAlunos; i++) {
        media += notas[i];
    }
    media /= numAlunos;

    for (int i = 0; i < numAlunos; i++) {
        desvioMedia[i] = notas[i] - media;
        desvioQuadrado[i] = pow(desvioMedia[i], 2);
    }

    variancia = 0.0;
    for (int i = 0; i < numAlunos; i++) {
        variancia += desvioQuadrado[i];
    }
    variancia /= numAlunos;

    desvioPadrao = sqrt(variancia);

    cout << "Media: " << media << endl;
    cout << "Desvios em relacao a media:" << endl;
    for (int i = 0; i < numAlunos; i++) {
        cout << "Aluno " << i + 1 << ": " << desvioMedia[i] << endl;
    }
    cout << "Desvios ao quadrado:" << endl;
    for (int i = 0; i < numAlunos; i++) {
        cout << "Aluno " << i + 1 << ": " << desvioQuadrado[i] << endl;
    }
    cout << "Variancia: " << variancia << endl;
    cout << "Desvio padrao: " << desvioPadrao << endl;

    return 0;
}
