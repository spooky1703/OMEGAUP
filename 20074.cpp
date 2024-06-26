#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int numTerminos;
    cin >> numTerminos;

    for (int i = 1; i <= numTerminos; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}