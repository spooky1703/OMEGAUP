#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N; 

    cin >> N;
    int pasos = 0; // Variable para contar el número de pasos
    int maximo = N; // Variable para almacenar el valor máximo alcanzado

    // Se itera hasta que N sea igual a 1
    while (N != 1) {
        // Si N es par, se divide entre 2
        if (N % 2 == 0) {
            N /= 2;
        } 
        // Si N es impar, se aplica la fórmula 3N + 1
        else {
            N = 3 * N + 1;
        }
        // Se actualiza el valor máximo si N es mayor que el actual
        maximo = max(maximo, N);
        // Se incrementa el contador de pasos
        pasos++;
    }

    // Se imprime el número de pasos y el valor máximo alcanzado
    cout << pasos << " " << maximo << endl;

    return 0;
}