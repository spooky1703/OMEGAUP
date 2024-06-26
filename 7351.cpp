#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b; // Variables para almacenar los límites inferior y superior

    // Se leen los valores de a y b desde la entrada estándar
    cin >> a >> b;

    // Se crea un vector para almacenar la secuencia de Fibonacci
    vector<int> fibonacci = {0, 1};

    // Se itera hasta que el último elemento de la secuencia sea mayor que b
    while (fibonacci.back() < b) {
        // Se calcula el próximo elemento de la secuencia como la suma de los dos últimos
        int next = fibonacci[fibonacci.size() - 1] + fibonacci[fibonacci.size() - 2];
        // Se agrega el nuevo elemento a la secuencia
        fibonacci.push_back(next);
    }

    int count = 0; // Variable para contar el número de elementos en el rango [a, b]

    // Se itera sobre la secuencia de Fibonacci
    for (int i = 0; i < fibonacci.size(); ++i) {
        // Se verifica si el elemento actual está en el rango [a, b]
        if (fibonacci[i] > a && fibonacci[i] < b) {
            // Se incrementa el contador si el elemento está en el rango
            count++;
        }
    }

    // Se imprime el número de elementos en el rango [a, b]
    cout << count << endl;

    return 0;
}