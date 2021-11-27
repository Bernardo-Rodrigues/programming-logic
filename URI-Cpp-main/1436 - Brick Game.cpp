#include <iostream>
using namespace std;

int main (){

    int T, N, meio;

    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> N;
        int time[N];

        for(int j = 0; j < N; j ++){
            cin >> time[j];
        }
        meio = (N / 2) ;

        cout << "Case " << i + 1 << ": " << time[meio] << endl;

    }
    return 0;
}


