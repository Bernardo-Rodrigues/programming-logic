#include <iostream>
using namespace std;

int main(){

  int N; 

  do{
    cin >> N;
    if(N != 0){
      bool primeiro = true;
      for(int i = 1; i*i <= N; i ++){
        if(primeiro){
          cout << i * i;
          primeiro = false;
        }else cout << " " << i * i;
      }
      cout << endl;
    }
  }while(N != 0);

  return 0;
}
