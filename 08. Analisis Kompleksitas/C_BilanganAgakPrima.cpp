#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_almost_prime(int n) {
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            count++;
        }
        if (count > 3) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        if (is_prime(num) || is_almost_prime(num)) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }

    return 0;
}
