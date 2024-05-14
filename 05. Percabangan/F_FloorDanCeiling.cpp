#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double N;
    cin >> N;
    cout << static_cast<int>(floor(N)) << " " << static_cast<int>(ceil(N)) << endl; 
    return 0;
}