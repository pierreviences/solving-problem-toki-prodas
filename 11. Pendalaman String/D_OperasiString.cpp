#include <iostream>
#include <string>
using namespace std;

string hapusString(string a, string b, int panjang){
    return a.erase(a.find(b), panjang);
}

string tambahString(string a, int panjang, string b, string c){
    return a.insert(a.find(b) + panjang,  c);
}

int main(){
    string s1, s2, s3, s4, s1Baru;
    cin >> s1 >> s2 >> s3 >> s4;
    
    s1Baru = hapusString(s1, s2, s2.length());
    s1Baru = tambahString(s1Baru, s3.length(), s3, s4);
    
    cout << s1Baru << endl;
    
    return 0;
}