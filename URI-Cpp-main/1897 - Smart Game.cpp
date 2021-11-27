#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main(){

  int N, M, Num, Operacoes = -1; //N = num inicial M = num final
  queue<pair<int,int>> Resultados;
  set<int> Calculados;

  cin >> N >> M;

  Resultados.emplace(make_pair(N,0));

  if(N != M){

    while(!Resultados.empty()){
      Num = Resultados.front().first;
      Operacoes = Resultados.front().second;
      Resultados.pop();

      if(!Calculados.count(Num)){
        if(Num != 0){
          if(Num * 2 == M) break;
          else Resultados.emplace(make_pair(Num * 2, Operacoes + 1));
          if(Num * 3 == M) break;
          else Resultados.emplace(make_pair(Num * 3, Operacoes + 1));
          if(Num / 2 == M) break;
          else Resultados.emplace(make_pair(Num / 2, Operacoes + 1));
          if(Num / 3 == M) break;
          else Resultados.emplace(make_pair(Num / 3, Operacoes + 1));
        }
        if(Num + 7 == M) break;
        else Resultados.emplace(make_pair(Num + 7, Operacoes + 1));
        if(Num - 7 == M) break;
        else Resultados.emplace(make_pair(Num - 7, Operacoes + 1));
      }
      Calculados.emplace(Num);
    }
  }
  cout << Operacoes + 1 << endl;

  return 0;
}
