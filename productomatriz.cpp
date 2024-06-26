#include <iostream>
using namespace std;

int main(){
    int n,m,o;
    cin >> n >> m >> o;
    int matriz1[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> matriz1[i][j];
        }
    }
    int matriz2[m][o];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<o ; j++){
            cin >> matriz2[i][j];
        }
    }
    int matriz_multi[n][o];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<o ; j++){
            matriz_multi[i][j] = 0;
            for(int k=0 ; k<m ; k++){
                matriz_multi[i][j] += matriz1[i][k]*matriz2[k][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            cout << matriz_multi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}