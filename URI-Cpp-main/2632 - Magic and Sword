#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int  w, h, x0, y0, N, cx, cy, T, dx, dX, dy, dY;
    float r;
    string elemento;

    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> w >> h >> x0 >> y0;
        cin >> elemento >> N >> cx >> cy;

            for(int j = x0; j <= x0 + w; j++){
                if(j == x0){
                    dX = j - cx;
                    dX = sqrt(pow(dX,2));
                }else{
                    dx = j - cx;
                    dx = sqrt(pow(dx,2));
                    if (dx < dX)
                        dX = dx;
                }}
            for(int k = y0; k <= y0 + h; k++){
                if(k == y0){
                    dY = k - cy;
                    dY = sqrt(pow(dY,2));
                }else{
                    dy = k - cy;
                    dy = sqrt(pow(dy,2));
                    if (dy < dY)
                        dY = dy;
                }}

            r = sqrt(pow(dX,2) + pow(dY,2));

        if(elemento == "fire"){
            switch(N){
            case 1: if(r <= 20) cout << "200" << endl; else cout << "0" << endl; break;
            case 2: if(r <= 30) cout << "200" << endl; else cout << "0" << endl; break;
            case 3: if(r <= 50) cout << "200" << endl; else cout << "0" << endl; break;
            }
        }
        if(elemento == "water"){
            switch(N){
            case 1: if(r <= 10) cout << "300" << endl; else cout << "0" << endl; break;
            case 2: if(r <= 25) cout << "300" << endl; else cout << "0" << endl; break;
            case 3: if(r <= 40) cout << "300" << endl; else cout << "0" << endl; break;
            }
        }
        if(elemento == "earth"){
            switch(N){
            case 1: if(r <= 25) cout << "400" << endl; else cout << "0" << endl; break;
            case 2: if(r <= 55) cout << "400" << endl; else cout << "0" << endl; break;
            case 3: if(r <= 70) cout << "400" << endl; else cout << "0" << endl; break;
            }
        }
        if(elemento == "air"){
            switch(N){
            case 1: if(r <= 18) cout << "100" << endl; else cout << "0" << endl; break;
            case 2: if(r <= 38) cout << "100" << endl; else cout << "0" << endl; break;
            case 3: if(r <= 60) cout << "100" << endl; else cout << "0" << endl; break;
            }
        }
    }

    return 0;
}
