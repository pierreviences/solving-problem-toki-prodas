#include <iostream>
using namespace std;

const int MAX_N = 9;

int N, K;
int catat[MAX_N + 1];

void tulis(int kedalaman) {
    if (kedalaman >= K) {
        for (int i = 0; i < K; i++) {
            cout << catat[i] << " ";
        } 
        cout << endl;
    } else {
        for (int i = catat[kedalaman - 1] + 1; i <= N; i++) {
            catat[kedalaman] = i;
            tulis(kedalaman + 1);
        }
    }
}

int main() {
    cin >> N >> K;
    tulis(0);
    return 0;
}