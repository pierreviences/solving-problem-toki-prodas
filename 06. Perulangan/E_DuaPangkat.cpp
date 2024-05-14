#include <iostream>
using namespace std;


bool isDuaPangkat(int N){
    if(N < 0){
        return false;
    }
    
    while(N > 1){
        if(N & 2 != 0){
            return false;
        }
        N/=2;
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    
    if(isDuaPangkat(N)){
        cout << "ya";
    }else{
        cout << "bukan";
    }
    
    
    return 0;
}