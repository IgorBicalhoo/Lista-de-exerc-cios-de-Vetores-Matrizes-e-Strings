#include <iostream>

using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

void lerMatriz(int** matriz, int m, int n) {
    cout << "Informe os elementos da matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int** matriz, int m, int n) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void calcularMatrizTransposta(int** matriz, int** transposta, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarMatrizPorFator(int** matriz, int fator, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] *= fator;
        }
    }
}

void somarMatrizes(int** matriz1, int** matriz2, int** resultado, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int m, n;
    cout << "Informe o número de linhas (M): ";
    cin >> m;
    cout << "Informe o número de colunas (N): ";
    cin >> n;

    if (m < 1 || m > MAX_M || n < 1 || n > MAX_N) {
        cout << "Tamanho de matriz inválido!" << endl;
        return 1;
    }

    int** matriz1 = new int*[m];
    int** matriz2 = new int*[m];
    int** transposta = new int*[n];
    int** resultado = new int*[m];

    for (int i = 0; i < m; i++) {
        matriz1[i] = new int[n];
        matriz2[i] = new int[n];
        resultado[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        transposta[i] = new int[m];
    }

    lerMatriz(matriz1, m, n);

    calcularMatrizTransposta(matriz1, transposta, m, n);
    cout << "Matriz transposta:" << endl;
    imprimirMatriz(transposta, n, m);

    int fator;
    cout << "Informe o fator de multiplicação: ";
    cin >> fator;
    multiplicarMatrizPorFator(matriz1, fator, m, n);
    cout << "Matriz multiplicada por " << fator << ":" << endl;
    imprimirMatriz(matriz1, m, n);

    lerMatriz(matriz2, m, n);
    somarMatrizes(matriz1, matriz2, resultado, m, n);
    cout << "Matriz resultado da soma:" << endl;
    imprimirMatriz(resultado, m, n);


    for (int i = 0; i < m; i++) {
        delete[] matriz1[i];
        delete[] matriz2[i];
        delete[] resultado[i];
    }

    for (int i = 0; i < n; i++) {
        delete[] transposta[i];
    }

    delete[] matriz1;
    delete[] matriz2;
    delete[] transposta;
    delete[] resultado;

    return 0;
}
