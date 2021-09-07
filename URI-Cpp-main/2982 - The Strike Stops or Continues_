#include <iostream>
using namespace std;

int main() {

    int N, SomaG = 0, SomaV = 0, C;
    char T;

    cin >> N;

    for(int i = 0; i < N; i ++){
        cin >> T >> C;
        if(T == 'G'){
            SomaG = SomaG + C;
        }else if(T == 'V'){
            SomaV = SomaV + C;
        }
    }

    if(SomaG > SomaV){
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    }else{
        cout << "A greve vai parar." << endl;
    }

    return 0;
}
