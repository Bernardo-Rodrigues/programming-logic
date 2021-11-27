#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int main(){

  int N, X, M;
  queue <int> Fila;
  unordered_set <int> Desistiram;
  bool primeiro = true;

  cin >> N;

  for(int i = 0; i < N; i ++){
    cin >> X;
    Fila.emplace(X);
  }

  cin >> M;

  for(int i = 0; i < M; i ++){
    cin >> X;
    Desistiram.emplace(X);
  }

  for(int i = 0; i < N; i ++){
    if(!Desistiram.count(Fila.front())){
      if(primeiro){
        cout << Fila.front();
        primeiro = false;
      }else cout << " " << Fila.front();
    }
    Fila.pop();
  }
  cout << endl;

  return 0;
}
