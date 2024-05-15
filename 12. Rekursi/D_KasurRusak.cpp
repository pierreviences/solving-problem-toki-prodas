#include <iostream>
#include <string>

using namespace std;

bool isPolindrom(string s, int start, int end){
    if(start >= end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    return isPolindrom(s, start + 1, end - 1);
    
}
int main(){ 
    string s;
    cin >> s;
    
    if(isPolindrom(s, 0, s.length() - 1)){
        cout << "YA";
    }else{
        cout << "BUKAN";
    }
    return 0;
}