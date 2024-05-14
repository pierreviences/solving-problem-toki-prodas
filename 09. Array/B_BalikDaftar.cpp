#include <iostream>
using namespace std;

int main() {
    int numbers[100];
    int num, count = 0;
    
    while (cin >> num) {
        numbers[count++] = num;
    }

    for (int i = count - 1; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}
