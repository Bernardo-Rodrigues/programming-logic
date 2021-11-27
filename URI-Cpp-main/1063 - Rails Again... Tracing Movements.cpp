#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main(){
    
  unsigned int N;
  char letra;
  
  //FAÇA ENQUANTO ENQUANTO ENTRADA DO USUÁRIO != 0
  do{
    
    queue<char> entrada;
    queue<char> saida;
    stack<char> estacao;

    cin >> N; 
    if(N != 0){
      
      //AQUISITANDO VAGÕES DE ENTRADA E ENFILEIRANDO-OS
      for(int i=0; i<N; i++){
        cin >> letra;
        entrada.push(letra);
      }
      
      //AQUISITANDO VAGÕES DE SAÍDA E ENFILEIRANDO-OS
      for(int i=0; i<N; i++){
        cin >> letra;
        saida.push(letra);
      }

      //N INTERAÇÕES (TAMANHO DO VAGÃO)
      for(int i = 0; i < N; i ++){

          //RETIRANDO ELEMENTOS DA ENTRADA E INSERINDO NA ESTAÇÃO
          estacao.push(entrada.front());
          cout << "I";
          entrada.pop();

          //COMPARANDO 
          while(estacao.top() == saida.front()){
              estacao.pop();
              cout << "R";
              saida.pop();
              if(estacao.empty()) break;
          }
      }

      if(!estacao.empty()) cout << " Impossible";
      
      cout << endl;
    }             
    
    
  }while(N != 0);
  
  return 0;
}
