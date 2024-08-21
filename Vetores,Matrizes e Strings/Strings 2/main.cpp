#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Informe a primeira string: ";
    getline(cin, str1);

    cout << "Informe a segunda string: ";
    getline(cin, str2);

    cout << "Primeira string: " << str1 << endl;
    cout << "Segunda string: " << str2 << endl;

    if (str1.size() >= 2) {
        cout << "Segunda letra da primeira string: " << str1[1] << endl;
    } else {
        cout << "A primeira string tem menos de 2 caracteres." << endl;
    }

    if (str2.size() >= 2) {
        cout << "Penúltima letra da segunda string: " << str2[str2.size() - 2] << endl;
    } else {
        cout << "A segunda string tem menos de 2 caracteres." << endl;
    }

    return 0;
}
