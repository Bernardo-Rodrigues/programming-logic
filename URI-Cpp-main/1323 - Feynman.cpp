#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int N, quadrados, area;

  do{
    cin >> N;
    if(N != 0){
      quadrados = 0;
      for(int i = 1; i <= N; i++){
        quadrados += (pow(i,2));
      }
      cout << quadrados << endl;
    }
  }while(N != 0);

  return 0;
}
