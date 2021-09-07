#include <iostream>

using namespace std;

int main() {

    string numero;
    int N, leds;

    cin >> N;

    for(int i = 0; i < N; i ++){
        leds = 0;
        cin >> numero;
        for(int j = 0; j < numero.size(); j ++){
            switch(numero[j]){
                case '0' : leds += 6; break;
                case '1' : leds += 2; break;
                case '2' : leds += 5; break;
                case '3' : leds += 5; break;
                case '4' : leds += 4; break;
                case '5' : leds += 5; break;
                case '6' : leds += 6; break;
                case '7' : leds += 3; break;
                case '8' : leds += 7; break;
                case '9' : leds += 6; break;
            }
        }
        cout << leds << " leds" << endl;
    }

    return 0;
}
