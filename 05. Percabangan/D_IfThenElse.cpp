#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    if(a == 0){
        cout << "nol";
    }else if (a > 0){
        cout << "positif";
    }else{
        cout << "negatif";
    }
    return 0;
}