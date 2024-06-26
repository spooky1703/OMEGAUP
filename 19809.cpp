//dado 153, hacer: 1 + 5 + 3 = 9
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    int temp = n; // Variable temporal para almacenar el valor original de n

    bool first_digit = true; // Bandera para determinar si es el primer dígito

    // Imprimir los dígitos y sumarlos
    while (temp != 0) {
        int digito = temp % 10;
        temp /= 10;

        if (!first_digit) {
            std::cout << " + ";
        }

        std::cout << digito;
        sum += digito;
        first_digit = false;
    }

    std::cout << " = " << sum << std::endl;
    return 0;
}