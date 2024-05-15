#include <iostream>
using namespace std;

void gambarGunung(int n){
    if(n == 1){
        cout << "*" << endl;
        return;
    }
    
    gambarGunung(n - 1);
    
    for(int i = 0; i < n; i++){
        cout << "*";
    }
    cout << endl;
    
    gambarGunung(n-1);
}

int main(){
    int n;
    cin >> n;
    
    gambarGunung(n);
    
    return 0;
}