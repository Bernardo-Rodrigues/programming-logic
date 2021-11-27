#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto sortByLength = [] (const auto& a, const auto& b) {
   return a.size() > b.size(); 
};

int main(){

  string palavra;
  int N;

  cin>>N;                                                 
  cin>>ws;

  for(int i = 0; i < N; i++){                     
    
    vector <string> frase;                            
      
    do{                                          
      cin>>palavra;                                 
      if(palavra != " "){                           
         frase.push_back(palavra);
      }
      
                                          
    }while(cin.get() != '\n' );                   

    stable_sort(frase.begin(), frase.end(), sortByLength);

    for (vector<string>::iterator it=frase.begin(); it != frase.end(); ++it){
      if(it == frase.begin()) cout << *it;
      else cout << " " << *it ; 
    }

    cout << endl;                    
  }

  return 0;
}
