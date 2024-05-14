#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N; // misal 6

    int count[1001] = {0}; 
    int maxCount = 0; 
    int mode = -1; 

  
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num; // misal input 2 2 2 4 4 4 -> outputnya 4
        count[num]++; //1 di index 2, 2 di index 2, 3 di index 2, 1 di index 4, 2 di index 4, 3 di index 4
        if (count[num] > maxCount) { 
            maxCount = count[num]; // 3
            mode = num; // 2
        } else if (count[num] == maxCount && num > mode) {
            mode = num; // 4
        }
    }

    cout << mode << endl;
    return 0;
}
