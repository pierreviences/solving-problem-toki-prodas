#include <iostream>
using namespace std;

int abs(int N){
    if( N < 0) return -N;
    else return N;
    
}

int pow(int a, int b) {
	int n=a;
	while (b>1) {
		n*=a;
		b--;
 }
	return n;
}


int main(){
    int N, D, hasil;
    int x[1000], y[1000];
    cin >> N >> D;
    
    
    int smallest = 0;
    int largest = 0;
    
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    for(int i = 0; i < N; i++){
       for(int j = i; j < N; j++){
           if( i != j){
               hasil = pow(abs(x[j] - x[i]), D) + pow(abs(y[j] - y[i]), D);
                if((smallest==0) && (largest==0)){
    				largest=hasil;
    				smallest=hasil;
    			}
                if(hasil < smallest){
                    smallest = hasil;
                }
                if(hasil > largest){
                    largest = hasil;
                }
           }
          
       }
    }
    
    cout << smallest << " " << largest << endl;
    

    
    return 0;
}