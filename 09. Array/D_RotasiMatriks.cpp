#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    for (int j = 0; j < M; j++){
        for(int i = N - 1; i>= 0; i--){
            cout << matrix[i][j];
            if( i != 0){
                cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}