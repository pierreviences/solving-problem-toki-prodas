#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int A, T;
    cin >> A >> T;
    cout << fixed << setprecision(2) << (A*T)*0.5 << endl;
    // biar ada angka bilangan dua dibelakang, harus pake fixed dan setprecision dan import iomanip
    return 0;
}