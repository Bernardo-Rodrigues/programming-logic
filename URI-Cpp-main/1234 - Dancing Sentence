#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
using namespace std;

int main() {

  string frase;
  int cont;

  while(getline(cin, frase)){
    cont = 0;
    for(int i = 0; i < frase.size(); i ++){
      if(frase[i] != ' '){
        if(cont == 0){
          frase[i] = toupper(frase[i]);
          cont++;
        } else {
          frase[i] = tolower(frase[i]);
          cont --;
        }
      }
    }
    cout << frase << endl;
  }

  return 0;
}
