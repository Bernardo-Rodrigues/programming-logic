#include <iostream>
#include <stack>
using namespace std;

int main(){

  string RNAA;
  int conexoes;

  while(cin >> RNAA){
    stack <char> RNA;
    conexoes = 0;
    for(auto x: RNAA){
      if(RNA.empty()) RNA.emplace(x);
      else{
        switch(x){
          case 'C':{
            if(RNA.top() == 'F') {
              RNA.pop();
              conexoes++;
            }else RNA.emplace('C'); break;
          }
          case 'F':{
            if(RNA.top() == 'C') {
              RNA.pop();
              conexoes++;
            }else RNA.emplace('F'); break;
          }
          case 'B':{
            if(RNA.top() == 'S') {
              RNA.pop();
              conexoes++;
            }else RNA.emplace('B'); break;
          }
          case 'S':{
            if(RNA.top() == 'B') {
              RNA.pop();
              conexoes++;
            }else RNA.emplace('S'); break;
          }
        }
      }
    }
    cout << conexoes << endl;
  }

  return 0;
}
