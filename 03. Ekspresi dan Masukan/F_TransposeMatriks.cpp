#include <iostream>
using namespace std;

int main(){
    int a[3][3];
    
    // inputan 
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> a[i][j];
        }   
    }
    
    // Transpose
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    
    // output
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
             cout << a[i][j];
            if (j < 2) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}