#include <iostream>
using namespace std;

int main() {

    int N, G, X, Soma = 0;

    cin >> N >> G;

    int V[N];
    char R[N];

    for(int i = 0; i < N; i++){
        cin >> R[i] >> V[i];
    }

    cin >> X;
    char runa[X];

    for(int i = 0; i < X; i++){
        cin >> runa[i];
    }

    for(int i = 0; i < X; i++){
        for(int j = 0; j < N; j++){
            if(runa[i] == R[j]){
                Soma = Soma + V[j];
            }
        }
    }

    cout << Soma << endl;
    if(Soma >= G){
        cout << "You shall pass!" << endl;
    }else{
        cout << "My precioooous" << endl;
    }

    return 0;
}
