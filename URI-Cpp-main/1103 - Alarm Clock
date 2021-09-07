#include <iostream>
using namespace std;

int main() {

    int H1, H2, M1, M2, TM;

    do{

        cin >> H1 >> M1 >> H2 >> M2;

        if(H1 != 0 || M1 != 0 || H2 != 0 || M2 != 0){
            if(H1 == H2){
                if(M1 == M2){
                    TM = 1440;
                }else if(M1 > M2){
                    TM = (23 * 60) + (60 - M1) +  M2;
                }else if(M1 < M2){
                    TM = M2 - M1;
                }
            }else if(H1 > H2){
                if(M1 == M2){
                    TM = ((24 - H1 + H2) * 60);
                }else if(M1 > M2){
                    TM = ((24 - H1 + H2 - 1) * 60) + (60 - M1) + M2;
                }else if(M1 < M2){
                    TM = ((24 - H1 + H2) * 60) + M2 - M1;
                }
            }else if(H1 < H2){
                if(M1 == M2){
                    TM = (H2 - H1) * 60;
                }else if(M1 > M2){
                    TM = ((H2 - H1 - 1) * 60) + (60 - M1) + M2;
                }else if(M1 < M2){
                    TM = ((H2 - H1) * 60) + M2 - M1;
                }
            }
            cout << TM << endl;
        }
    }while(H1 != 0 || M1 != 0 || H2 != 0 || M2 != 0);

    return 0;
}
