#include <iostream>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

vector <pair<stack<int>,int>> Towers;

int Torres(vector <pair<stack<int>,int>>, int N){
  float topo, maximo; 
  bool flag = false;
  (Towers[N-1].second != -1) ? maximo = Towers[N-1].second + 1 : maximo = Torres(Towers, N - 1) + 1; //Se ja calculou o maximo na quantidade de pinos anterior, soma +1, se não, calcula e soma +1

  do{
    for(int i = 0; i <= N; i ++){
      
      if(Towers[i].first.empty()){ //Verifica se chegou no pino novo
        Towers[i].first.push(maximo); //Empilha o novo maximo na pino novo
        maximo++;
        break;
      }else topo = Towers[i].first.top(); //Salva o topo do pino atual
        
      if(sqrt(topo + maximo) - int(sqrt(topo + maximo)) == 0){ // confere se pode inserir o novo numero nesse pino
        Towers[i].first.push(maximo);
        maximo++;
        break;
      }
  
      if(i == N)flag = true; //nao foi possivel um novo maximo
    }
  }while(flag == false);

  Towers[N].second = maximo - 1; //Define o maximo dessa quantidade de pinos
  return (maximo - 1);
}

int Hanoi(int N){
  return (Towers[N-1].second != -1) ? Towers[N-1].second : Torres(Towers, N-1); //Olha se ja foi calculado o maximo da quantidade de pinos, se já, retorna como resposta, se não, calcula e retorna 
}

int main() {

  int T, N;

  stack<int> pino;
  pino.push(1);
  Towers.emplace_back(make_pair(pino,1)); //Já define o primeiro Pino e numero maximo

  for(int i = 1; i < 50; i ++){
     stack<int> pino;
     Towers.emplace_back(make_pair(pino,-1));//Cria os outros Pinos vazios e define o maximo como -1 
  }

  cin >> T;

  for(int i = 0; i < T; i ++){
    cin >> N;
    cout << Hanoi(N) << endl; //Manda como resposta o retorno da função
  }

  return 0;
}
