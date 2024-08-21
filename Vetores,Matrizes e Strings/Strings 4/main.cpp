#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string cargo;
    double salario, novoSalario, aumento;

    cout << "Informe o cargo do funcionário: ";
    getline(cin, cargo);

    cout << "Informe o salário do funcionário: ";
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

    cout << "Salário antigo: R$ " << salario << endl;
    cout << "Novo salário: R$ " << novoSalario << endl;
    cout << "Diferença: R$ " << aumento << endl;

    return 0;
}
