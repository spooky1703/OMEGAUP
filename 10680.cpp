#include <iostream>
#include <string>
#include <cmath> // Incluye la biblioteca cmath para usar std::pow

int binarioadecimal(std::string binario) {
    int decimal = 0;
    int potencia = 0;

    for (int i = binario.length() - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal += std::pow(2, potencia);
        }
        potencia++;
    }

    return decimal;
}

int main() {
    std::string binario;
    std::cin >> binario;

    int decimal = binarioadecimal(binario);
    std::cout << binario <<"=" << decimal << std::endl;

    return 0;
}