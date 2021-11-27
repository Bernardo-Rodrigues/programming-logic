#include <vector>
#include <iostream>
using namespace std;

vector <int> p; //Pesos
vector <int> v; //Valores
int Pac, c = 50, peso, sobrou;//Pacotes, peso maximo, peso atingido, pacotes que sobraram

int knapsack_0_1(){

  int mat[Pac+1][c+1]; //Matriz dos valores
  int keep[Pac+1][c+1]; //Matriz dos itens incluidos
  int item = Pac, W = 50; //item atual, peso atual;

  for(int i=0;i<Pac;i++){
    mat[i][0]=0; //Inicializa a primeira coluna com 0
    keep[i][0]=0;
  }
  for(int i=0;i<=c;i++){
    mat[0][i]=0; //Inicializa a primeira linha com 0
    keep[0][i]=0;
  }
  
  for(int i=1;i<=Pac;i++){
    for(int j=1;j<=c;j++){
      if(p[i-1]>j){ //Se o peso do item é maior do que o atualmente suportado pela mochila
        mat[i][j] = mat[i-1][j]; //Mantem o valor de cima
        keep[i][j] = 0; //Não incluiu o item
      }
      else{ //Se o item cabe no peso atual da mochila
        mat[i][j] = max(mat[i-1][j],mat[i-1][j-p[i-1]]+v[i-1]); //Vale a pena colocar o item ou é melhor continuar com o obtido até agora ?
        if(mat[i][j] == mat[i-1][j]) keep[i][j] = 0; //se n vale a pena colocar o item
        else keep[i][j] = 1; //Inclui o item
      }
    }
  }
  
  do{
    if(keep[item][W] == 1){ //Se o item esta na mochila
      peso += p[item-1]; //Aumenta o peso usado 
      W -= p[item-1]; //Diminui o peso disponivel
    }
    else sobrou++; //Se não esta na mochila
    item--; //Passa pro proximo item
  }while (item > 0); //Enquanto houver itens

  return mat[Pac][c]; //Retorna o valor maximo
}

int main(){

  int N, qt, w;

  cin >> N;

  for(int i = 0; i < N; i ++){
    peso = 0;
    sobrou = 0;
    cin >> Pac;
    for(int i = 0; i < Pac; i ++){
      cin >> qt >> w;
      p.emplace_back(w);
      v.emplace_back(qt);
    }
    cout << knapsack_0_1() << " brinquedos\nPeso: " << peso << " kg\nsobra(m) " << sobrou << " pacote(s)" << endl << endl;
    p.clear();
    v.clear();
  }
  
}
