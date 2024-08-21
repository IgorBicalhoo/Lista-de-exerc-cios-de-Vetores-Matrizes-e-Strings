#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string cargo;
    double salario, novoSalario, aumento;

    cout << "Informe o cargo do funcion�rio: ";
    getline(cin, cargo);

    cout << "Informe o sal�rio do funcion�rio: ";
    cin >> salario;

    map<string, double> aumentoPorCargo = {
        {"Diretor", 0.10},
        {"Gerente", 0.08},
        {"Supervisor", 0.06},
        {"Analista", 0.04}
    };

    if (aumentoPorCargo.count(cargo)) {
        aumento = salario * aumentoPorCargo[cargo];
    } else {
        aumento = salario * 0.05;
    }

    novoSalario = salario + aumento;

    cout << "Sal�rio antigo: R$ " << salario << endl;
    cout << "Novo sal�rio: R$ " << novoSalario << endl;
    cout << "Diferen�a: R$ " << aumento << endl;

    return 0;
}
