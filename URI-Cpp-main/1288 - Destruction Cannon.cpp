#include <vector>
#include <iostream>
using namespace std;

vector <int> p; //Pesos
vector <int> v; //Valores
int N, K;

int knapsack_0_1(){

  int mat[N+1][K+1]; //Matriz dos valores
  
  for(int i=0;i<N;i++) mat[i][0]=0; //Inicializa a primeira coluna com 0
  for(int i=0;i<=K;i++) mat[0][i]=0; //Inicializa a primeira linha com 0
   
  for(int i=1;i<=N;i++){
    for(int j=1;j<=K;j++){
      if(p[i-1]>j) mat[i][j] = mat[i-1][j]; //Mantem o valor de cima
      else mat[i][j] = max(mat[i-1][j],mat[i-1][j-p[i-1]]+v[i-1]); //Vale 
    }
  }
  return mat[N][K]; //Retorna o valor maximo
}

int main(){

  int T, R, X, Y;

  cin >> T;

  for(int i = 0; i < T; i ++){
    cin >> N;
    for(int i = 0; i < N; i ++){
      cin >> X >> Y;
      p.emplace_back(Y);
      v.emplace_back(X);
    }
    cin >> K >> R;
    if(knapsack_0_1() < R) cout << "Falha na missao" << endl;
    else cout << "Missao completada com sucesso" << endl;
    p.clear();
    v.clear();
  }
  
}
