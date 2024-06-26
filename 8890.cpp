#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> fib(n,0);
    fib[0] = 1, fib[1] =1;
    for (int i =2 ;i <n; i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    for (int i=0; i< fib.size(); i++){
        cout << fib[i]<<" ";
    }
    return 0;
}