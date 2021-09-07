#include <iostream>
#include <queue>
#include<set>
#include <algorithm>
#include <string>
using namespace std;

int main(){

  int T, N, M;

  cin >> T;

  for(int i = 0; i < T; i ++){
    queue <pair<int,int>> resultados;
    set<int>calculados;
    int operacoes = -1;
  
    cin >> N >> M;

    resultados.emplace(make_pair(N, 0));

    if(N != M){
      operacoes++;
      while(!resultados.empty()){
        N = resultados.front().first;
        operacoes = resultados.front().second;
        resultados.pop();
        
        if(!calculados.count(N)){

            string n(to_string(N));
            reverse(n.begin(),n.end());
            int N_ = stoi(n);

            if(N + 1 == M) break;
            else resultados.emplace(make_pair((N + 1), operacoes+1));
            if(N_ == M) break;
            else  resultados.emplace(make_pair(N_, operacoes+1));
            
        }
        calculados.emplace(N);
      }
    }
    cout << operacoes + 1 << endl;
  }

  return 0;
}
