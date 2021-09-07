#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, R, voltou, j;

    while(cin >> N >> R){
      vector <int> foram;
  
      for(int i = 0; i < N; i++){
        foram.emplace_back(i+1);
      }
      j = 1;
      for(int i = 0; i < R; i++){
        cin >> voltou;
        for(int j = 0; j < foram.size(); j++){
          if(foram[j] == voltou) foram.erase(foram.begin()+j);
        }
      }
      
      if(foram.size() == 0) cout << "*";
      else{
        for(int i = 0; i < foram.size(); i++){
          cout << foram[i] << " ";
        }
      }
      cout << endl;
    }

    return 0;
}
