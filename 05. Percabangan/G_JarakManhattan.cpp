#include <iostream>
#include <cmath>
using namespace std;


// cara 1 pake modul
// int main(){
//     int x1, x2, y1, y2;
//     cin >> x1 >> y1 >> x2 >> y2;
    
//     int hasil = abs(x1 - x2) + abs(y1 - y2);
//     cout << hasil << endl;
//     return 0;
// }

// cara 2 manual
int absolut(int n) {
    if (n < 0) {
        return -n;
    }else{
        return n;
    }
}

int main(){
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int hasil = absolut(x1 - x2) + absolut(y1 - y2);
    cout << hasil << endl;
    return 0;
}