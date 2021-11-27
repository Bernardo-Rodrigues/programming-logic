#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){

  int N, M, P, quant;
  double valor, total;
  string fruta;

  cin >> N;

  for(int i = 0; i < N; i++){
    total = 0;
    map <string,double> lista;
    cin >> M;
    cin >> ws;
    for(int j = 0; j < M; j++){
      cin >> fruta >> valor;
      lista.emplace(fruta,valor);
    }


    cin >> P;
    for(int j = 0; j < P; j++){
      cin >> fruta >> quant;

      if (lista.count(fruta)>0) total += quant * lista.at(fruta);
    }
    cout << fixed << setprecision(2);
    cout << "R$ " << total << endl;
  }

  return 0;
}
