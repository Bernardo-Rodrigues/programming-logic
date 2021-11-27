#include <iostream>
using namespace std;

int main()
{
    int N, dias;
    double X;

    cin >> N;

    for(int i = 0; i < N; i ++){
        cin >> X;
        dias = 0;
        while(X > 1){
            X /= 2;
            dias++;
        }
        cout << dias << " dias" << endl;
    }

    return 0;
}
