#include <iostream>

int multiplicacion(int a, int b) {
    if (b == 0) return 0;
    if (b == 1) return a;
    return a + multiplicacion(a, b - 1);
}

int verificar(int a, int b) {
    if (a < 0 && b < 0) {
        return multiplicacion(-a, -b);
    } else if (a < 0) {
        return -multiplicacion(-a, b);
    } else if (b < 0) {
        return -multiplicacion(a, -b);
    } else {
        return multiplicacion(a, b);
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << verificar(a, b) << std::endl;
    return 0;
}
