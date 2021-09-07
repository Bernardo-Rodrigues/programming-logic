#include <iostream>
#include <string>
using namespace std;

int main() {

    int N, tamanho;

    cin >> N;

    for(int i = 0; i < N; i ++){
        string palavra("");
        string palavraA("");
        string palavraB("");

        cin >> palavraA >> palavraB;

        if(palavraA.size() <= palavraB.size()) tamanho = palavraA.size();
        else tamanho = palavraB.size();

        for(int j = 0; j < tamanho; j++){
            palavra = palavra + palavraA[j] + palavraB[j];
        }

        palavraA.erase(0,tamanho);
        palavraB.erase(0,tamanho);

        palavra = palavra + palavraA + palavraB;

        cout << palavra << endl;
    }

    return 0;
}
