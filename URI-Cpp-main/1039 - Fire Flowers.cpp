#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

    int R1, R2, X1, X2, Y1, Y2;

    while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2){
        if(R1 >= (sqrt(pow((X1 - X2), 2) + (pow((Y1 - Y2), 2)))) + R2){
            cout << "RICO" << endl;
        }else{
            cout << "MORTO" << endl;
        }
    }

    return 0;
}
