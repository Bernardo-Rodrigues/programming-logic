#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

  string expressao;
  bool flag = false;
  int cont = 0;

  cin>>ws;
  while(getline(cin,expressao)){
    stack<char> Pilha;
    flag = false;
      
    for(auto x:expressao){
      
      if(x == '('){
        Pilha.push(x);
        cont ++;
      }
          
      else if(x == ')'){
        cont++;
        if(!Pilha.empty())
          Pilha.pop();
         
        else{
          flag = true;
          break;
        }
      }
    }

    if (cont != 0){
      
      if(!Pilha.empty() || flag == true)
        cout << "incorrect" << endl;
      
      else
        cout << "correct" << endl;
    }
  }
}
