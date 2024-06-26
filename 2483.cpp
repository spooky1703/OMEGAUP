#include <iostream>
using namespace std;

int main(){
    // Se declaran tres variables enteras para almacenar el número de filas y columnas de las matrices
    int n, m, o;
    
    // Se leen los valores de n, m y o desde la entrada estándar (teclado)
    cin >> n >> m >> o;
    
    // Se declara una matriz de tamaño n x m y se inicializan sus elementos con valores leídos desde la entrada estándar
    int matriz1[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> matriz1[i][j];
        }
    }
    
    // Se declara una matriz de tamaño m x o y se inicializan sus elementos con valores leídos desde la entrada estándar
    int matriz2[m][o];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<o ; j++){
            cin >> matriz2[i][j];
        }
    }
    
    // Se declara una matriz de tamaño n x o para almacenar el resultado de la multiplicación de matrices
    int matriz_multi[n][o];
    
    // Se itera sobre cada elemento de la matriz resultado, calculando el producto de los elementos correspondientes de las matrices 1 y 2
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<o ; j++){
            matriz_multi[i][j] = 0; // Se inicializa el elemento en cero
            for(int k=0 ; k<m ; k++){
                // Se suma el producto de los elementos correspondientes de las matrices 1 y 2
                matriz_multi[i][j] += matriz1[i][k]*matriz2[k][j];
            }
        }
    }
    
    // Se imprime la matriz resultado
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            cout << matriz_multi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}