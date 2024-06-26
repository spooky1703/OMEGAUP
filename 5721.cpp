#include <iostream>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    if (n < 0) {
        return 1;
    }
    long long result = factorial(n);
    std::cout << result << std::endl;
    return 0;
}