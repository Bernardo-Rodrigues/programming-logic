#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
using namespace std;

int main() {

  int N, M;
  string lingua, linguaFalada;

  cin >> N;

  for(int i = 0; i < N; i ++){
    cin >> M;
    for(int j = 0; j < M; j ++){
      if(j == 0) cin >> linguaFalada;
      else{
        cin >> lingua;
        if(lingua != linguaFalada) linguaFalada = "ingles";
      }
    }
    cout << linguaFalada << endl;
  }

  return 0;
}
