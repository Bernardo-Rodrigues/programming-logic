#include <iostream>
#include <map>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main() {

    int n, nl = 0;
    string madeira;

    cin >> n;
    cin >> ws;

    for(int i = 0; i < n; i++){
        if(nl == 1){
            cout << endl;
            nl = 0;
        }
        map <string,int> especie;
        int quant = 0;
        while(getline(cin,madeira) && madeira != ""){
            quant++;
            especie[madeira]++;
        }
        for(auto e:especie){
            cout << e.first << " " << fixed << setprecision(4) << (e.second * 100.0/ quant) << endl;
        }
        nl++;
    }

    return 0;
}
