#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){

  double T, F, valor;
  unsigned long long dia = 1, treino = 1, multa = 0, a, b;

  priority_queue< pair<pair<double,unsigned long long>,int>> Dragoes; //Valor,dias para treinar, dia que chegou

  vector<int>Multas;

  while(cin >> T >> F){
    Multas.emplace_back(F);
    valor = F / T;
    Dragoes.emplace(make_pair(make_pair(valor,T),dia));
    if (treino == dia){
      multa += Multas[Dragoes.top().second-1] * (treino - Dragoes.top().second);
      treino += Dragoes.top().first.second; 
      Dragoes.pop();
    }
    dia++;
  };

  while(!Dragoes.empty()){
    if (treino == dia){
      multa += Multas[Dragoes.top().second-1] * (treino - Dragoes.top().second);
      treino += Dragoes.top().first.second; 
      Dragoes.pop(); 
    }
    dia++;
  }

  cout << multa << endl;

  return 0;
}
