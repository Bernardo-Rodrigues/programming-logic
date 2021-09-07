#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string entrada;
  vector <string> diamantes;
  int testes, cont;
  
  cin >> testes;

  for(int i = 0; i < testes; i++){
     cont = 0;
     cin >> entrada;
     for(int j = 0; j < entrada.size(); j ++){
      if(entrada[j] == '.'){
        entrada.erase(entrada.begin()+j);
        j=0;
      }
     }
     for(int j = 0; j < entrada.size(); j ++){
      
      if(entrada[j] == '<' && entrada[j+1] == '>'){
        entrada.erase(entrada.begin()+j, entrada.begin()+j+2);
        cont++;
        j = -1; 
      }
     }
     cout << cont << endl;
  }
  
}
