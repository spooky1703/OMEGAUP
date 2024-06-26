#include <iostream>

long long factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n-1);
}

int main() {
  int num;
  std::cin >> num;

  if (num < 0) {
    return 1;
  }

  long long result = factorial(num);
  std::cout << result << std::endl;
  return 0;
}