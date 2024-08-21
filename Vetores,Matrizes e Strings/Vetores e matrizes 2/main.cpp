#include <iostream>

using namespace std;

int main() {
    int quantidade[5];
    float valorUnitario[5];
    float valorTotalProduto[5];
    float valorTotalCompra = 0.0;


    cout << "Digite as quantidades compradas e valores unitarios dos 5 produtos:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Quantidade: ";
        cin >> quantidade[i];
        cout << "Valor unitário: ";
        cin >> valorUnitario[i];
        cout << endl;
    }


    for (int i = 0; i < 5; i++) {
        valorTotalProduto[i] = quantidade[i] * valorUnitario[i];
        valorTotalCompra += valorTotalProduto[i];
    }

    cout << "Valor total por produto:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Produto " << i + 1 << ": R$ " << valorTotalProduto[i] << endl;
    }
    cout << "Valor total da compra: R$ " << valorTotalCompra << endl;

    return 0;
}
