#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (distancia <= r1 + r2) {
        cout << "Si" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}