#include <iostream>
using namespace std;

//A ideia é encontrar o MMC entre os números e subtrair dos anos que passaram

int main() {

  unsigned long long M, L1, L2, L3;
  
  while(cin >> M >> L1 >> L2 >> L3){
    int i = 2, mmc = 1;

    while(L1>1 || L2>1 || L3>1){
        int md1 = L1 % i;
        int md2 = L2 % i;
        int md3 = L3 % i;
        
        if(md1 == 0){L1 /= i;}
        if(md2 == 0){L2 /= i;}
        if(md3 == 0){L3 /= i;}
 
        if(md1 && md2 && md3){
            i += 1;
        }else{
            mmc *= i;
        }
    }

    cout << mmc - M << endl;
  }
}
