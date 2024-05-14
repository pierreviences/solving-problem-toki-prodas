#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int num;
    cin >> num;
    int smallest = num;
    int largest = num;

    for (int i = 1; i < N; ++i) {
        cin >> num;
        if (num < smallest) {
            smallest = num;
        }
        if (num > largest) {
            largest = num;
        }
    }

    cout << largest << " " << smallest << endl;

    return 0;
}
