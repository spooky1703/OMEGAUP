#include <iostream>
#include <map>
using namespace std;

int main(){

    // Se declara un mapa (map) que relaciona enteros con enteros
    map<int, int> m;
    
    int n, p, alumnos, preg;

    cin >> n >> p;

    for (int i = 1; i <= n; i++){
        // Se lee el número de alumnos para cada caso y se almacena en el mapa con la clave i
        cin >> alumnos;
        m[i] = alumnos;
    }

    // Se itera sobre cada pregunta (p veces)
    while (p--){
        // Se lee la pregunta (un entero) desde la entrada estándar
        cin >> preg;
        // Se busca el valor asociado a la clave preg en el mapa y se imprime
        cout << m[preg] << endl;
    }

    return 0;
}