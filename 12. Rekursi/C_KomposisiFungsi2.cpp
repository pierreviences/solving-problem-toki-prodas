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
    if (K == 0) {
        return x;
    }
    return fungsi(A, B, K - 1, abs(A * x + B));
}
int main(){
    int A, B, K, x;
    cin >> A >>  B >> K >> x;
    cout << fungsi(A, B, K, x);
    return 0;
}