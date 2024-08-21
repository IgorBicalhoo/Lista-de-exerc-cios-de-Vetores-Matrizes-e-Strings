#include <iostream>

using namespace std;

int main() {
    int V1[10];
    int V2[10];

    cout << "Informe os 10 elementos do vetor V1:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> V1[i];
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            V2[i] = V1[i] * 5;
        } else {
            V2[i] = V1[i] + 5;
        }
    }

    cout << "Vetor V1:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << V1[i] << " ";
    }
    cout << endl;

    cout << "Vetor V2:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << V2[i] << " ";
    }
    cout << endl;

    return 0;
}
