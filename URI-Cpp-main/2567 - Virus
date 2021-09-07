//2567 - VIRUS

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {

  int N, X;
  
  while(cin >> N){
    vector <int> virus;

    for(int i = 0; i < N; i ++){
      cin >> X;
      virus.emplace_back(X);
    }
    sort(virus.begin(),virus.end()); //virus ja ta ordenado
    
    int soma = 0;
    for(int i=0; i<virus.size()/2; i++){
      soma += virus[(N-1)-i] - virus[i];
    }

    cout << soma << endl;
  }

 return 0;
}
