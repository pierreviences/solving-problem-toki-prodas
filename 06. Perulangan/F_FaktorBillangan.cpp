#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int i = N;
    while(i >= 1){
        if(N % i == 0){
            cout << i << endl;
        }
        i--;
    }
    
    return 0;
}