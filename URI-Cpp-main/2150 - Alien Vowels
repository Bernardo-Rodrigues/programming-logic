#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

  string alien, frase;
  int cont;

  while(getline(cin,alien), getline(cin,frase)){
    cont = 0;

    for(int i = 0; i < frase.size(); i++){
      size_t posicao = alien.find(frase[i]);
      if(posicao != string::npos){
       cont++;
      }
    }
    cout << cont << endl;

  }

  return 0;
}
