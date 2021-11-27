#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int raiz, N;
  bool flag;

  while(cin >> N){
    flag = false;
    if(N < 0) cout << "NO" << endl;
    else{
      raiz = sqrt(N);
      do{
        if(sqrt(N - raiz*raiz) - int(sqrt(N - raiz*raiz)) == 0){
          cout << "YES" << endl;
          flag = true;
        }
        else raiz--;
      }while(raiz >= 0 && flag == false);
      if(!flag) cout << "NO" << endl;
    }
  }
  return 0;
}
