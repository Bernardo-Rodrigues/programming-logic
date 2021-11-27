//1523 ESTACIONAMENTO LINEAR
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){

  int N, K, C, S;

  //FAÇA ENQUANTO N E K != 0
  do{
    bool flag = false;
    cin >> N >> K;
      
    //SE N E K FOREM 0, FAZ NADA
    if(N == 0 && K == 0) 
      break;
      
    //PILHA COM HORÁRIOS C E S
    stack <pair<int,int>> motoristas;   

    //ENTRADA DE N MOTORISTAS
    for(int i = 0; i < N; i ++){
      cin >> C >> S;
      
      //ESTACIONAMENTO VAZIO, ENTRA
      if (motoristas.empty()){
        motoristas.push(make_pair(C,S));
      
      //ESTACIONAMENTO NÃO VAZIO
      }else{
        
          //ENQUANTO MOTORISTAS PUDEREM SAIR, SAEM ANTES DE EU ENTRAR
          while(C >= motoristas.top().second){
            motoristas.pop();
            
            if(motoristas.empty()) 
              break;
          }

          //SE TEM VAGA NO ESTACIONAMENTO E SAIREI ANTES DE QUEM ESTÁ LÁ, ENTRO
          if(!motoristas.empty()){
            if(motoristas.size() < K && S < motoristas.top().second){
              motoristas.push(make_pair(C,S));  
            } else flag = true;
          }else motoristas.push(make_pair(C,S));
      }
    }
      
      if(flag) cout << "Nao" << endl;
      else cout << "Sim" << endl;
     
  
  }while(N != 0 && K != 0);

  return 0;
}

// o horario de entrada pode estar atrelado a pila estar cheia ou não
// podemos comparar os horários de entrada de um com o de saída do outro
// usar pair pra armazenar todas as informações
// o cara que tá lá vai sair antes de eu chegar?
