#include <iostream>
#include <queue>

using namespace std;

int main() {

    int movimentos, X1, Y1, X2, Y2;

    do{

        cin >> X1 >> Y1 >> X2 >> Y2;

        if(X1 != 0 && Y1 != 0 && X2 != 0 && Y2 != 0){

            if(X1 == X2 && Y1 == Y2){
                movimentos = 0;
            }else if(abs(X1 - X2) == abs(Y1 - Y2) || X1 == X2 || Y1 == Y2){
                movimentos = 1;
            }else{
                movimentos = 2;
            }

            cout << movimentos << endl;
        }

    }while(X1 != 0 && Y1 != 0 && X2 != 0 && Y2 != 0);


    return 0;
}
