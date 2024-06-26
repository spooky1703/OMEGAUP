#include <iostream>
#include <vector>

using namespace std;

void vertical(vector<vector<int> >& tablero) {
    int M = tablero.size();
    for (int i = 0; i < M / 2; ++i) {
        swap(tablero[i], tablero[M - 1 - i]);
    }
}

void horizontal(vector<vector<int> >& tablero) {
    int M = tablero.size();
    int N = tablero[0].size();
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N / 2; ++j) {
            swap(tablero[i][j], tablero[i][N - 1 - j]);
        }
    }
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int> > tablero(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> tablero[i][j];
        }
    }

    int K;
    cin >> K;
    int conteoV = 0;
    int conteoC = 0;
    for (int i = 0; i < K; ++i) {
        char op;
        cin >> op;
        if (op == 'V') {
            conteoV++;
        } else if (op == 'H') {
            conteoC++;
        }
    }

    if (conteoV % 2 == 1) {
        vertical(tablero);
    }
    if (conteoC % 2 == 1) {
        horizontal(tablero);
    }

    for (const auto& row : tablero) {
        for (int j = 0; j < N; ++j) {
            if (j > 0) cout << " ";
            cout << row[j];
        }
        cout << endl;
    }

    return 0;
}