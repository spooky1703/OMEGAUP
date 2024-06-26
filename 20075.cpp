//crear una funcion para multiplicar sin usar * (solo con recursividad)
#include <iostream>
using namespace std;

int multiplicacionRara(int a, int b) {
  if (b == 0) {
    return 0;
  } else if (b > 0) {
    if (a > 0) {
      return a + multiplicacionRara(a, b - 1);
    } else {
      return -a + multiplicacionRara(a, b - 1);
    }
  } else {
    if (a > 0) {
      return -a + multiplicacionRara(a, b + 1);
    } else {
      return a + multiplicacionRara(a, b + 1);
    }
  }
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << multiplicacionRara(a, b);
  return 0;
}