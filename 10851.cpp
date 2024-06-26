#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;

    int sum = 0;//estas dos lineas evitaron que tuviera mejor puntaje en la otra etapa 😭
    for (size_t i = 0; i < n.size(); i++) {
        sum += n[i] - '0';
    }

    if (sum % 9 == 0) {
        std::cout << "Divisibilidad!\n";
    } else {
        std::cout << "No es multiplo.\n";
    }

    return 0;
}