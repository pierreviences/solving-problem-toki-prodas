#include <iostream>

using namespace std;
int N;
int catat[1000];
bool pernah[1000] = {0};

void tulis(int kedalaman) {
    if(kedalaman >= N) {
        bool zigzag = true;
        for(int i=1; i<N-1; i++) {
            if(!((catat[i-1] < catat[i] && catat[i+1] < catat[i])
            || (catat[i-1] > catat[i] && catat[i+1] > catat[i]))) zigzag = false;
        }
        if(zigzag) {
            for(int i=0; i<N; i++) cout<<catat[i];
            cout<<'\n';
        }
    } else {
        for(int i=1; i<=N; i++) {
            if(!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                tulis(kedalaman+1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    cin>>N;
    tulis(0);
    return 0;
}