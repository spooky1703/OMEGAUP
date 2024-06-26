//se quiere saber cuantas veces cabe la caja de dimensiones l*w*h en la caja con dimensiones L*W*H
#include <iostream>
using namespace std;

int volumen(int l, int w, int h){
    int v;
    v=l*w*h;
    return v;

}

int main(){

    int L,W,H;
    cin>>L>>W>>H;
    int cajaG = volumen(L,W,H);
    int l,w,h;
    cin>>l>>w>>h;
    int cajaC = volumen(l,w,h);

    if (cajaC>cajaG)
    {
        cout<<0<<endl;
    }else{
        int n=cajaG/cajaC;
        cout<<n<<endl;
    }
    return 0;
}