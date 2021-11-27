#include <iostream>
#include <string>
using namespace std;

int main() {

  int N, cont;
  string numero, one = "one";

  cin >> N;
  cin >> ws;

  for(int i = 0; i < N; i ++){
    cont = 0;
    cin >> numero;
    if(numero.size() == 3){
      for(int j = 0; j < 3; j++){
        if(numero[j] == one[j]) cont ++;
      }
      if(cont > 1) cout << "1" << endl;
      else cout << "2" << endl;
    }else cout << "3" << endl;
  }

  return 0;
}
