#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    int temp = abs(n);
    int digits[10];
    int num_digits = 0;

    while (temp != 0) {
        digits[num_digits] = temp % 10;
        temp /= 10;
        num_digits++;
    }

    for (int i = num_digits - 1; i >= 0; i--) {
        if (i != num_digits - 1) {
            std::cout << " + ";
        }
        std::cout << digits[i];
        sum += digits[i];
    }
    std::cout << " = " << sum << std::endl;

    return 0;
}