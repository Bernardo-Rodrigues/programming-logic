#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int N;
    string dieta, cafe, almoco, refeicoes;
    bool flag;

    cin >> N;
    cin >> ws;

    for(int i = 0; i < N; i ++){
        flag = false;

        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);

        refeicoes = cafe + almoco;

        if(refeicoes.size() > dieta.size()){

            cout << "CHEATER" << endl;

        }else if (refeicoes.size() <= dieta.size()){

            for(int j = 0; j < refeicoes.size(); j ++){

                size_t posicao = dieta.find(refeicoes[j]);

                if(posicao != string::npos){
                    dieta.erase(dieta.begin() + posicao);
                }else flag = true;

                if(flag == true) break;
            }

            if(flag == true) cout << "CHEATER" << endl;
            else{
                sort(dieta.begin(), dieta.end());
                cout << dieta << endl;
            }

        }
    }

    return 0;
}
