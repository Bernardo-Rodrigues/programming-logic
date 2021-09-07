//1944 - BRINDE FACE 2015
#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

//A IDEIA INICIAL É CRIAR DUAS PILHAS:
// - PILHA PRINCIPAL (DO EVENTO), INICIALIZADA COM FACE
// - PILHA SECUNDÁRIA (DE VERIFICAÇÃO), UTILIZADA PARA ENTRADAS RECENTES (NOPE)
//RESTA SABER SE É POSSÍVEL PERCORRER UMA STRING DENTRO DO NÓ DE UMA ESTRUTURA
//A PASSAGEM DE PARÂMETRO CERTA É A POR VALOR MESMO, REFERENCIA MUDA A VARIÁVEL

int main (){

  //DECLARANDO VARIÁVEIS E PILHA
  int N = 0, Brindes = 0;
  string participante, participante_reverso;
  
  stack<string> painel;
  painel.push("F A C E");

  //AQUISITANDO CASOS DE TESTE
  cin >> N;
  
  //TRATANDO CASOS DE TESTE
  for(int i=0; i<N; i++){
    cin >> ws;
    getline(cin, participante);

    reverse(participante.begin(),participante.end());
    //SE PARTICIPANTE == INVERSO DO PAINEL,
    if(painel.top() == participante){ //talves a forma certa de comparar não seja esse ==, como que verifica se uma string é igual a outra?
      Brindes++;
      
      if(painel.size() != 1)
        painel.pop();
    
    //DO CONTRÁRIO, EMPILHA NO PAINEL A STRING PARTICIPANTE
    } else {
      reverse(participante.begin(),participante.end());
      painel.push(participante);
    }
  
  }
  
  cout << Brindes << endl;
 
  return 0;
}
