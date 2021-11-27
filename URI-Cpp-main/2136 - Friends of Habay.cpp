#include <iostream>
#include <set>
using namespace std;

int main(){
  string nome, voto, maior = "";
  set <string> SIM;
  set <string> NAO;

  cin >> nome;
  
  while(nome != "FIM"){
     
      cin >> voto;  
      if(voto == "YES"){
          SIM.emplace(nome);
          if(nome.length() > maior.length()) maior = nome;
      }else
          NAO.emplace(nome);

    cin >> nome;
  };

  for(auto x: SIM)
    cout << x << endl;

  for(auto x: NAO)
    cout << x << endl;

  cout << endl << "Amigo do Habay:" << endl << maior << endl;
  
  return 0;
}
