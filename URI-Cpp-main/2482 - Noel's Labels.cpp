#include <iostream>
#include <map>
using namespace std;

int main() {

    int N, M;
    string nome, lingua, traducao;
    map <string,string> traducoes;

    cin >> N;
    cin >> ws;

    for(int i = 0; i < N; i ++){
        getline(cin, lingua);
        getline(cin, traducao);
        traducoes.insert(pair<string,string>(lingua,traducao));
    }

    cin >> M;
    cin >> ws;

    for(int i = 0; i < M; i++){
        getline(cin, nome);
        getline(cin, lingua);
        cout << nome << endl;
        cout << traducoes[lingua] << endl << endl;
    }

    return 0;
}
