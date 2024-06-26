#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Calcula el perímetro máximo de un triángulo que se puede formar con un conjunto de palos.
 * 
 * El algoritmo funciona de la siguiente manera:
 * 1. Se ordenan los palos en orden ascendente.
 * 2. Se itera desde el final del vector hacia atrás, verificando si el palo actual es menor que la suma de los dos palos anteriores.
 * 3. Si se cumple la condición, se devuelve el perímetro del triángulo formado por los tres palos.
 * 4. Si no se encuentra un triángulo válido, se devuelve -1.
 */
int maxPerimeter(vector<int>& sticks) {
    // Ordenar los palos en orden ascendente
    sort(sticks.begin(), sticks.end());
    int n = sticks.size();
    // Iterar desde el final del vector hacia atrás
    for (int i = n - 1; i >= 2; --i) {
        // Verificar si el palo actual es menor que la suma de los dos palos anteriores
        if (sticks[i] < sticks[i - 1] + sticks[i - 2]) {
            // Devolver el perímetro del triángulo formado por los tres palos
            return sticks[i] + sticks[i - 1] + sticks[i - 2];
        }
    }
    // Si no se encuentra un triángulo válido, devolver -1
    return -1;
}

int main() {
    int N;
    // Leer el número de palos
    cin >> N;
    vector<int> sticks(N);
    // Leer los palos
    for (int i = 0; i < N; ++i) {
        cin >> sticks[i];
    }
    // Imprimir el perímetro máximo del triángulo
    cout << maxPerimeter(sticks) << endl;
    return 0;
}