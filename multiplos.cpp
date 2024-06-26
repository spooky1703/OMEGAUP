#include <iostream>
using namespace std;
int main() {
    long long int a,b,i=1;
    cin>> a>> b;
    while(a*i <=b){
        cout << a*i<<" ";
        i++;
    }

    return 0;
}