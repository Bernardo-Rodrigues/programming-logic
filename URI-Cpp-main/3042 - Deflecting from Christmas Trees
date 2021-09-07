#include <iostream>
using namespace std;

int main() {

    int M, L, C, R, movimentos;
    char faixa;

    do{
        cin >> M;

        if(M > 0){
            movimentos = 0;
            faixa = 'C';

            for(int i = 0; i < M; i++){
                cin >> L >> C >> R;

                switch(faixa){
                    case 'L':
                        if (L == 1){
                                if(C == 0){
                                    faixa = 'C';
                                    movimentos ++;
                                }
                                if(R == 0){
                                    faixa = 'R';
                                    movimentos += 2;
                                }
                        } break;
                    case 'C':
                        if (C == 1){
                            if(L == 0){
                                    faixa = 'L';
                                    movimentos ++;
                            }
                            if(R == 0){
                                    faixa = 'R';
                                    movimentos ++;
                            }
                        } break;
                    case 'R':
                        if(R == 1){
                            if(C == 0){
                                faixa = 'C';
                                movimentos ++;
                            }
                            if(L == 0){
                                faixa = 'L';
                                movimentos += 2;
                            }
                        } break;
                }
            }
            cout << movimentos << endl;
        }

    }while(M > 0);

    return 0;
}
