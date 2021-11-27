#include <iostream>
#include <vector>
using namespace std;

int main(){

  int N,A,B,C,D,E,cont;
  bool flag;

  do{
    cin >> N;
    
    if(N != 0){
      vector <char> gabarito;
      for(int i = 0; i < N; i ++){
        flag = false;
        vector <int> questao;
        cont = 0;

        cin >> A >> B >> C >> D >> E;
        questao.emplace_back(A);
        questao.emplace_back(B);
        questao.emplace_back(C);
        questao.emplace_back(D);
        questao.emplace_back(E);

        for(int j = 0; j < 5; j ++){
          if(questao[j] <= 127){
            cont++;
            if(cont == 1){
              switch(j){
                case 0: gabarito.emplace_back('A'); break;
                case 1: gabarito.emplace_back('B'); break;
                case 2: gabarito.emplace_back('C'); break;
                case 3: gabarito.emplace_back('D'); break;
                case 4: gabarito.emplace_back('E'); break;
              }
            }else{
              gabarito.erase(gabarito.begin()+i);
              gabarito.emplace_back('*');
              flag = true;
            }
          }
          if(flag == true) break;
        }
        if(cont == 0) gabarito.emplace_back('*');
      }
      for(vector<char>::iterator it = gabarito.begin(); it < gabarito.end(); it++){
        cout << *it << endl;
      }
    }
  }while(N != 0);

  return 0;
}
