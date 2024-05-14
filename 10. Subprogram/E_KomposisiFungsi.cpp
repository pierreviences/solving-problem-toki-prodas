#include <iostream>
using namespace std;

int abs(int n){
    if(n < 0){
        return -n;
    }else{
        return n;
    }
}

int fungsi(int A, int B, int K, int x){
    int hasil = x;
    for(int i = 0; i < K; i++){
        hasil = abs (A*hasil + B);
    }
    
     return hasil;
}

int main(){
    int A, B, K, x;
    cin >> A >>  B >> K >> x;
    cout << fungsi(A, B, K, x);
    return 0;
}