#include <iostream>
using namespace std;

int main() {
    int n, m;
    int f;
cin >> n;
cin >> m;
    
     f = n/m;
    if (n%m==0){
    cout<< f;
  } else{
    cout << f << " " << n%m <<  "/" << m ;
}
  return 0;
}