#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int B, T, AF, AM;
    int H = 70, A = 70 * 160;

    cin >> B >> T;

    if(B > T){
        AF = (T * H) + (((B - T) * H) / 2);
        AM = A - AF;
    }else if (B < T){
        AF = (B * H) + (((T - B) * H) / 2);
        AM = A - AF;
    }else if (B == T){
        AF = B * H;
        AM = A - AF;
    }

    if(AF > AM){
        cout << "1" << endl;
    }else if(AF < AM){
        cout << "2" << endl;
    }else if(AF == AM){
        cout << "0" << endl;
    }
    return 0;
}


