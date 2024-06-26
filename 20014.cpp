#include <iostream>
using namespace std;

int MCD(int a, int b){
while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){

    int n1,n2;
    cin>> n1>>n2;
    cout<<"El máximo común divisor (MCD) de" << n1 <<" y " <<n2<< " es: "<<MCD(n1,n2);
}