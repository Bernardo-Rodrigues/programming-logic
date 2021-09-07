#include <iostream>
using namespace std;

int main() {

    int N, j, atk;
    long long ONR = 0;

    cin >> N;
    int star[N];

    for(int i = 0; i < N; i ++){
        cin >> star[i];
    }

    j = 0;
    atk = 1;

    while(star[j] > 0 && j < N){
        if(star[j] % 2 == 0){
            star[j]--;
            j--;
        }else{
            star[j]--;
            j++;
            if(j < N){
                atk++;
            }
        }
    }

    for(int i = 0; i < N; i ++){
        ONR = ONR + star[i];
    }

    cout << atk << " " << ONR << endl;

    return 0;
}
