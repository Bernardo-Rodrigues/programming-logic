#include <iostream>
#include <string>
using namespace std;

int main() {

    int T, V;
    string S;

    cin >> T;
    cin >> ws;

    for(int i = 0; i < T; i ++){
        getline(cin, S);
        V = 1;
        for(int j = 0; j < S.size() ; j++){
            if(S[j] == 'A' || S[j] == 'a'){
                V *= 3;
            }else if(S[j] == 'E' || S[j] == 'e'){
                V *= 3;
            }else if(S[j] == 'I' || S[j] == 'i'){
                V *= 3;
            }else if(S[j] == 'O' || S[j] == 'o'){
                V *= 3;
            }else if(S[j] == 'S' || S[j] == 's'){
                V *= 3;
            }else{
                V *= 2;
            }
        }
        cout << V << endl;
    }

    return 0;
}
