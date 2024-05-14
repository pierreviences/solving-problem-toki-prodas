#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N], B[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        char P, Q;
        int x, y;
        cin >> P >> x >> Q >> y;

        if (P == 'A') {
            swap(A[x - 1], (Q == 'A' ? A[y - 1] : B[y - 1]));
        } else {
            swap(B[x - 1], (Q == 'A' ? A[y - 1] : B[y - 1]));
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
