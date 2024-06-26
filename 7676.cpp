#include <iostream>
#include <vector>

using namespace std;

void resolver() {
    int num_escenarios;
    cin >> num_escenarios;

    for (int i = 1; i <= num_escenarios; i++) {
        int num_murallas;
        cin >> num_murallas;

        int alturas_murallas[num_murallas];
        for (int j = 0; j < num_murallas; j++) {
            cin >> alturas_murallas[j];
        }

        int saltos_altos = 0, saltos_bajos = 0;
        for (int j = 1; j < num_murallas; j++) {
            if (alturas_murallas[j] > alturas_murallas[j - 1]) {
                saltos_altos++;
            } else if (alturas_murallas[j] < alturas_murallas[j - 1]) {
                saltos_bajos++;
            }
        }

        cout << "Escenario " << i << ": " << saltos_altos << " " << saltos_bajos << endl;
    }
}

int main() {
    resolver();
    return 0;
}