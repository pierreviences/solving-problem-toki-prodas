#include <iostream>
#include <string>

using namespace std;

string caesar_cipher(string s, int k){
    string b;
    for(int i = 0; i< s.length(); i++){
        if(isalpha(s[i])){
            char base = islower(s[i]) ? 'a' : 'A';
            int index = s[i] - base;
            index = (index + k) % 26;
            s[i] = base + index;
        }
    }
    return s;
}

int main(){
    string S;
    int T;
    cin >> S >> T;
    cout << caesar_cipher(S, T) << endl;
    return 0;
}