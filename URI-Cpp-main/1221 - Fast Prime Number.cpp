#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, primo;
    unsigned int X;

    cin >> N;

    for(int i = 0; i < N; i ++){
        primo = 1;
        cin >> X;
        for(int i = 2; i <= sqrt(X); i++){
            if(X % i == 0){
                cout << "Not Prime" << endl;
                primo = 0;
                break;
            }
        }
    if(primo == 1){
        cout << "Prime" << endl;
    }
    }

    return 0;
}
