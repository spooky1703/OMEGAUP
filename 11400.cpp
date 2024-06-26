#include <iostream>
using namespace std;
int main(){
    int n, k , num, cont =0;
    cin>> n;
    while(n--){
        cin>> num;
        if(k==num)cont++;
    }
    cout<< cont <<"\n";
    return 0;
}