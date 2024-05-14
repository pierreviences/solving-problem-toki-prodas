#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    if(a > 0) {
        if(a % 2 == 0){
            cout << a;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
    
    return 0;
}