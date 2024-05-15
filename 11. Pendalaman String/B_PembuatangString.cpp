#include <iostream>
#include <string>

using namespace std;

int main(){
    string S, T;
    cin >> S >> T;
    
    while(S.find(T) != -1 && S.find(T) < S.length()){
        S.erase(S.find(T), T.length());
    }
    
    cout << S << endl;
    
    return 0;
}