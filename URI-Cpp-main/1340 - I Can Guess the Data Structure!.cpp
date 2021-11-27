#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;

int main(){

  int N, A, B;
  bool flag1, flag2, flag3;

  while(cin >> N){
    flag1 = flag2 = flag3 = true;
    queue <int> fila;
    stack <int> pilha;
    priority_queue<int> fila_de_prioridade;

    for(int i = 0; i < N; i ++){
      cin >> A >> B;
      switch(A){
        case 1:{
          fila.emplace(B);
          pilha.emplace(B);
          fila_de_prioridade.emplace(B);
          break;
        }
        case 2:{
          if(fila.empty()) break;
          
          if(B != fila.front()) flag1 = false;
          if(B != pilha.top()) flag2 = false;
          if(B != fila_de_prioridade.top()) flag3 = false;
          fila.pop();
          pilha.pop();
          fila_de_prioridade.pop();
          break;
        }
      }
    }

    if(flag1 && !flag2 && !flag3){
      cout << "queue" << endl;
    } else if (!flag1 && flag2 && !flag3){
      cout << "stack" << endl;
    } else if (!flag1 && !flag2 && flag3){
      cout << "priority queue" << endl;
    } else if(!flag1 && !flag2 && !flag3){
      cout << "impossible" << endl;
    } else cout << "not sure" << endl;
    
  }

  return 0;
}
