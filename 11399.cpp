#include <iostream>
using namespace std;

int main() {
    int saldo = 1000;
    char opcion;
    while (cin >> opcion) {
        if (opcion == 'S') break;
        if (opcion == 'C') {
            cout << "$" << saldo << endl;
        } else {
            int monto;
            cin >> monto;
            if (opcion == 'R') {
                saldo -= monto;
            } else if (opcion == 'D') {
                saldo += monto;
            }
        }
    }
    return 0;
}