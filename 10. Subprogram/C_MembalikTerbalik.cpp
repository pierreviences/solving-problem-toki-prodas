#include <iostream>
using namespace std;

int reversed(int x){
    int temp = x;
    int ret = 0;
    while(temp > 0){
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }
    
    return ret;
}

int main(){
    int  A, B;
    cin >> A >> B;
    
    int reversed_A = reversed(A);
    int reversed_B = reversed(B);
    
    int C = reversed_A + reversed_B;
    int reversed_C = reversed(C);
    
    cout << reversed_C << endl;
    
    
    return 0;
}