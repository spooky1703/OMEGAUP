#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Número de votantes o votos inválidos" << endl;
        return 0;
    }

    vector<int> votos(3, 0); // Inicializa votos para cada candidato a 0

    for (int i = 0; i < n; i++) {
        int voto;
        cin >> voto;

        if (voto < 1 || voto > 3) {
            cout << "Número de votantes o votos inválidos" << endl;
            return 0;
        }

        votos[voto - 1]++; // Incrementa el recuento de votos para el candidato correspondiente
    }

    int maxVotos = *max_element(votos.begin(), votos.end());
    int ganador = -1;

    for (int i = 0; i < 3; i++) {
        if (votos[i] == maxVotos) {
            ganador = i + 1; // Número de candidato (1, 2, o 3)
        }
    }

    if (maxVotos > n / 2) {
        cout << "Ganador: Candidato " << ganador << endl;
    } else {
        vector<int> topDos;
        for (int i = 0; i < 3; i++) {
            if (votos[i] == maxVotos) {
                topDos.push_back(i + 1);
            }
        }

        cout << "Segunda vuelta: candidatos ";
        for (int i = 0; i < topDos.size(); i++) {
            cout << topDos[i];
            if (i < topDos.size() - 1) {
                cout << " y ";
            }
        }
        cout << endl;
    }

    return 0;
}