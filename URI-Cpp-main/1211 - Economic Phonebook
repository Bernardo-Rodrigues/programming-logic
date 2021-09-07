#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){

  int N, cont;
  string X, anterior, atual;

  while(cin >> N){
    cont = 0;
    vector <string> lista;

    for(int i = 0; i < N; i ++){
      cin >> X;
      lista.emplace_back(X);
    }
    sort(lista.begin(), lista.end());

    anterior = lista[0];

    for(int i = 1; i < N; i ++){
      atual = lista[i];
      for(int j = 0; j < anterior.size(); j ++){
        if(atual[j] == anterior[j]){
            cont++;
        }else break;
      }
      anterior = atual;
    } 
    cout << cont << endl;
  }

  return 0;
}
