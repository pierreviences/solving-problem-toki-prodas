#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int angka = 0;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout <<  angka % 10;
            angka++;
        }
        cout << endl;
    }
    
    return 0;
}