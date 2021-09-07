#include <iostream>
using namespace std;

int main (){

    int N, resto, F1, F2;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> F1 >> F2;

        resto = F1 % F2;
        while(resto != 0){
            F1 = F2;
            F2 = resto;
            resto = F1 % F2;
        }
        cout << F2 << endl;
    }

    return 0;
}
