#include <iostream>
#include <queue>
using namespace std;

void MostraFila(queue <int> Fila){
  queue <int> X = Fila;

  while(!X.empty()){

    if(X.size() != 1){
      cout << X.front() << ", " ;
      X.pop();
    }

    else {
      cout << X.front();
      X.pop();
    }

  }

  cout<<endl;
}

int main(){

  int N;

  do{

    cin >> N;
    if(N != 0){
        queue <int> Cartas;
        queue <int> Removidas;

        for(int i = 1; i <= N; i++){
          Cartas.push(i);
        }

        do{

            Removidas.push(Cartas.front());
            Cartas.pop();
            Cartas.push(Cartas.front());
            Cartas.pop();


        }while(Cartas.size() > 1);

        cout << "Discarded cards: ";
        MostraFila(Removidas);

        cout << "Remaining card: ";
        MostraFila(Cartas);
    }


  }while(N > 0);

}
