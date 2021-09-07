#include <iostream>
using namespace std;

int main()
{
    int M, N;

    while(cin >> M >> N)
    {
        long long FM = 1, FN = 1;
        for(int i = M; i >= 0; i--){
            if(i == 0){
                FM = FM * 1;
            }else{
                FM = FM * i;
            }
        }
        for(int i = N; i >= 0; i--){
             if(i == 0){
                FN = FN * 1;
            }else{
                FN = FN * i;
            }
        }
        cout << FM + FN << endl;
    }

    return 0;
}
