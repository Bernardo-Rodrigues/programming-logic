#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ordena (int i,int j) { return (i>j); }

int main(){

  int N,M,P,errado;

  cin >> N;

  for(int i = 0; i < N; i++){
    
    vector <int> fila;
    vector <int> filaOrdenada;
    errado = 0;
    cin >> M;
    for(int j = 0; j < M; j++){
      cin >> P;
      fila.emplace_back(P);
    }

    filaOrdenada = fila;
    sort (filaOrdenada.begin(), filaOrdenada.end(), ordena);

    for(int i = 0; i < M; i++){
     if(fila[i] != filaOrdenada[i]) errado++;
  }

  cout << M - errado << endl;
  }
  
  return 0;
}
