#include <iostream>

int main() {
    int N; // cantidad de elementos del arreglo
    std::cin >> N;

    int arreglo[N]; // arreglo de enteros
    for (int i = 0; i < N; i++) {
        std::cin >> arreglo[i];
    }

    int K; // valor que se quiere contar
    std::cin >> K;

    int contador = 0; // contador de veces que aparece el valor
    for (int i = 0; i < N; i++) {
        if (arreglo[i] == K) {
            contador++;
        }
    }

    std::cout << contador << "\n";

    return 0;
}