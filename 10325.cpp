#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>> s;
    if (s.size() <=4){
        cout<< s << '\n';
    }
    else{
        cout << s[0] << s.size()-2 << s[s.size()-1]<<'\n';
    }
    return 0;
}