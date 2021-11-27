#include <iostream>
#include <stack>
using namespace std;

int main() {

    int N, X, vagoes, ordem;
    bool flag;

    do{
        flag = false;
        cin >> N;

        if(N != 0){
            do{
                stack <int> trem;
                stack <int> chegada;

                ordem = N;
                vagoes = 0;

                do{
                    cin >> X;
                    if(X != 0){
                        trem.push(X);
                        vagoes++;
                    }
                }while(X != 0 && vagoes < N);

                for(int i = 0; i < vagoes; i ++){

                    chegada.push(trem.top());
                    trem.pop();

                    while(chegada.top() == ordem){
                        chegada.pop();
                        ordem--;
                        if(chegada.empty() == 1) break;
                    }
                }

                if(vagoes != N){
                    flag = true;
                    cout << endl;
                }else if(chegada.empty() == 1){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }

            }while(flag != true);
        }
    }while(N != 0);

    return 0;
}
