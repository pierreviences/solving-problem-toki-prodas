#include <iostream>
using namespace std;

string biner(int N){
    if(N == 1){
        return "1";
    }else if(N % 2 == 0){
        return biner(N/2) + "0";
    }else{
        return biner(N/2) + "1";
    }
}

int main(){
    int N;
    cin >> N;
    cout << biner(N) << endl;
    return 0;
}