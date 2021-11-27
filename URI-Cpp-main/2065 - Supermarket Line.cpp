#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){

  int N, M, v, c, Caixa, Tempo, TempoTotal;

  vector<int> TempoCaixa;
  queue<int> Clientes;
  priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > Caixas;
  
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    cin >> v;
    TempoCaixa.emplace_back(v);
    Caixas.emplace(make_pair(0,i));
  }

  if(!Caixas.empty()){
    for(int i = 0; i< M; i++){
      Tempo = Caixas.top().first;
      Caixa = Caixas.top().second;
      Caixas.pop();
      cin >> c;
      Caixas.emplace(make_pair(Tempo + (c * TempoCaixa[Caixa]), Caixa));
    }

    do{
      if(Caixas.size() == 1) cout << Caixas.top().first << endl;
      Caixas.pop();
    }while(!Caixas.empty());
  }

  return 0;
}
