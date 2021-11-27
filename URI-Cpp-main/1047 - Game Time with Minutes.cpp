#include <iostream>

using namespace std;

int main() {

    int HI,MI,HF,MF,duracaoH,duracaoM;

    cin >> HI >> MI >> HF >> MF;


    if (HI < HF){
        if(MI == MF){
            duracaoH = HF - HI;
            duracaoM = MF - MI;
        }
        if(MI < MF){
            duracaoH = HF - HI;
            duracaoM = MF - MI;
        }
        if(MI > MF){
            duracaoH = HF - HI - 1;
            duracaoM = 60 - (MI - MF);
        }
    }
    if (HI > HF){
        if(MI == MF){
            duracaoH = HF - (24 - HI);
            duracaoM = MF - MI;
        }
        if(MI < MF){
            duracaoH = HF - (24 - HI);
            duracaoM = MF - MI;
        }
        if(MI > MF){
            duracaoH = HF + (24 - HI - 1);
            duracaoM = 60 - (MI - MF);
        }
    }
    if(HI == HF){
        if(MI == MF){
            duracaoH = HF + (24 - HI);
            duracaoM = MF - MI;
        }
        if(MI < MF){
            duracaoH = HF - HI;
            duracaoM = MF - MI;
        }
        if(MI > MF){
            duracaoH = HF + (24 - HI - 1);
            duracaoM = 60 - (MI - MF);
        }
    }

    cout << "O JOGO DUROU " << duracaoH << " HORA(S) E " << duracaoM << " MINUTO(S)" << endl;

    return 0;
}
