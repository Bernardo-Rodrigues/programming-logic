#include <iostream>
using namespace std;

int main(){

    int N, posicao;

    do{
        cin >> N;
        if(N != 0){
            cin >> ws;
            char * comandos = new char [N];
            for(int i = 0; i < N; i++){
                cin >> comandos[i];
            }
            posicao = 1;
            for(int i = 0; i < N; i++){
                if(comandos[i] == 'D'){
                    posicao++;
                    if(posicao > 4) posicao = 1;
                }else if(comandos[i] == 'E'){
                    posicao--;
                    if(posicao < 1) posicao = 4;
                }
            }
            switch(posicao){
                case 1: cout << "N" << endl; break;
                case 2: cout << "L" << endl; break;
                case 3: cout << "S" << endl; break;
                case 4: cout << "O" << endl; break;
            }
            delete [] comandos;
        }
    }while(N != 0);

    return 0;
}
