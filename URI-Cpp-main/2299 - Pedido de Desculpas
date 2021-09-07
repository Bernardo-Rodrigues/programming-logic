#include <vector>
#include <iostream>
using namespace std;

vector <int> p; //Pesos
vector <int> v; //Valores
int F, C;

int knapsack_0_1(){

  int mat[F+1][C+1]; //Matriz dos valores
  
  for(int i=0;i<F;i++) mat[i][0]=0; //Inicializa a primeira coluna com 0
  for(int i=0;i<=C;i++) mat[0][i]=0; //Inicializa a primeira linha com 0
   
  for(int i=1;i<=F;i++){
    for(int j=1;j<=C;j++){
      if(p[i-1]>j) mat[i][j] = mat[i-1][j]; //Mantem o valor de cima
      else mat[i][j] = max(mat[i-1][j],mat[i-1][j-p[i-1]]+v[i-1]); //Vale 
    }
  }
  return mat[F][C]; //Retorna o valor maximo
}

int main(){

  int N, D, teste = 1;
  bool primeiro = true;

  do{
    cin >> C >> F;
    if(C != 0 && F != 0){
    if(!primeiro) cout << endl;
    else primeiro = false;
      for(int i = 0; i < F; i ++){
        cin >> N >> D;
        p.emplace_back(N);
        v.emplace_back(D);
      }
      cout << "Teste " << teste << endl << knapsack_0_1() << endl;
      p.clear();
      v.clear();
      teste++;
    }
  }while(C != 0 && F != 0);
  cout << endl;
  
}
