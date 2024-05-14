#include <iostream>
using namespace std;

void factorial(int N){
    
    for(int i = 2; i <= N; i++){
        int count = 0;
        while(N % i == 0){
            N/=i;
            count++;
        }
        if(count > 0){
            cout << i;
            if(count > 1){
                cout << "^" << count;
            }
            if(N > 1){
                cout << " x ";
            }
        }
    }
}

int main(){
    int N;
    cin >> N;
    factorial(N);
    return 0;
}