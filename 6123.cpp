#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir una matriz serpentina
void matrizXD(int M, int N) {
    // Se crea una matriz de tamaño MxN con valores inicializados en 0
    vector<vector<int> > matrix(M, vector<int>(N));
    int num = 1; // Variable para asignar números consecutivos a la matriz

    // Se itera sobre cada fila de la matriz
    for (int i = 0; i < M; ++i) {
        // Si la fila es par, se llena de izquierda a derecha
        if (i % 2 == 0) {
            for (int j = 0; j < N; ++j) {
                matrix[i][j] = num++; // Se asigna el valor de num y se incrementa en 1
            }
        } 
        // Si la fila es impar, se llena de derecha a izquierda
        else {
            for (int j = N - 1; j >= 0; --j) {
                matrix[i][j] = num++; // Se asigna el valor de num y se incrementa en 1
            }
        }
    }

    // Se imprime la matriz serpentina
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j > 0) cout << " "; // Se imprime un espacio entre cada elemento
            cout << matrix[i][j]; // Se imprime el elemento de la matriz
        }
        cout << endl; // Se imprime un salto de línea al final de cada fila
    }
}

int main() {
    int M, N; // Variables para almacenar el número de filas y columnas

    // Se leen los valores de M y N desde la entrada estándar
    cin >> M >> N;

    // Se llama a la función para imprimir la matriz serpentina
    matrizXD(M, N);

    return 0;
}