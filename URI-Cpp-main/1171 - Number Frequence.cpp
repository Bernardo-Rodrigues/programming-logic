#include <iostream>
#include <map>
using namespace std;

int main() {

    int N, X;
    map <int,int> frequencia;

    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> X;
        frequencia[X]++;
    }

    for(auto x:frequencia){
        cout << x.first << " aparece " << x.second << " vez(es)" << endl;
    }

    return 0;
}
