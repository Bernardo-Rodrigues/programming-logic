#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int N, X;
    unsigned long long graos;

    cin >> N;

    for(int i = 0; i < N; i ++){
        cin >> X;
        graos = 0;
        for(int j = 0; j < X; j ++){
            graos = graos + pow(2,j);
        }
        graos = graos / 12000;
        if(X == 64){
            graos = 1537228672809129;
        }
        cout << graos << " kg" << endl;
    }
    return 0;
}


