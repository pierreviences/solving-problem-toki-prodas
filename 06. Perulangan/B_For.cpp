#include <iostream>
using namespace std;

int main(){
    int N, inputan;
    int hasil = 0;
    cin >> N;
    for (int i = 0; i < N; ++i){
        cin >> inputan;
        hasil = hasil + inputan;
    }
    
    cout << hasil << endl;
    
    return 0;
}