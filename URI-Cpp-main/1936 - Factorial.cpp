#include <iostream>
using namespace std;

int main(){

  int N = 0, fatorial = 1, Armazena = 0, cont = 0;

  cin >> N;

  do{
    fatorial = 1;

    for(int i = 1; fatorial <= N; i++){
      fatorial = fatorial*i;
      Armazena = i - 1;
    }

    N = N - (fatorial / (Armazena + 1));

    cont++;

  }while (N>0);

  cout << cont << endl;

  return 0;
}
