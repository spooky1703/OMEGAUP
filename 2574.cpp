#include <iostream>
#include <vector>

int main() {
    int num;
    std::vector<int> cadena;

    for (int i = 0; i < 3; i++) {
        std::cin >> num;
        cadena.push_back(num);
    }

    for (int i = 2; i >= 0; i--) {
        std::cout << cadena[i] << std::endl;
    }

    return 0;
}