#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int N, x, y, R, B, C;

    cin >> N;

    for(int i = 0; i < N; i ++){
        cin >> x >> y;
        R = pow((3*x),2) + pow(y,2);
        B = 2 * pow(x,2) + pow((5*y),2);
        C = (-100 * x) + pow(y,3);
        if(R > B && R > C){
            cout << "Rafael ganhou" << endl;
        }
        if(B > R && B > C){
            cout << "Beto ganhou" << endl;
        }
        if(C > R && C > B){
            cout << "Carlos ganhou" << endl;
        }
    }
    return 0;
}


