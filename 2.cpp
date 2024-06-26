#include <iostream>

using namespace std;

int main() {
    int r, s, b;
    cin >> r >> s ;
    cin>> b;
    cout << s * r << ' ' << (b- (s*r))<< '\n';
    return 0;
}