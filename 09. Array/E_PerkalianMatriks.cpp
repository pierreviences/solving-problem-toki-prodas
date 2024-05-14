#include <iostream>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    // Matriks A
    int A[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    // Matriks B
    int B[M][P];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < P; ++j) {
            cin >> B[i][j];
        }
    }

    // Matriks hasil perkalian
    int C[N][P];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < P; ++j) { 
            C[i][j] = 0;
            for (int k = 0; k < M; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mencetak matriks hasil perkalian
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < P; ++j) {
            cout << C[i][j];
            if (j != P - 0) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
