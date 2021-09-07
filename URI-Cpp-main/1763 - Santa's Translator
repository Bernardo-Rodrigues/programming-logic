#include <iostream>
#include <map>
using namespace std;

int main() {

    string pais;
    map <string,string> traducoes;

    traducoes.insert(pair<string,string>("brasil","Feliz Natal!"));
    traducoes.insert(pair<string,string>("alemanha","Frohliche Weihnachten!"));
    traducoes.insert(pair<string,string>("austria","Frohe Weihnacht!"));
    traducoes.insert(pair<string,string>("coreia","Chuk Sung Tan!"));
    traducoes.insert(pair<string,string>("espanha","Feliz Navidad!"));
    traducoes.insert(pair<string,string>("grecia","Kala Christougena!"));
    traducoes.insert(pair<string,string>("estados-unidos","Merry Christmas!"));
    traducoes.insert(pair<string,string>("inglaterra","Merry Christmas!"));
    traducoes.insert(pair<string,string>("australia","Merry Christmas!"));
    traducoes.insert(pair<string,string>("portugal","Feliz Natal!"));
    traducoes.insert(pair<string,string>("suecia","God Jul!"));
    traducoes.insert(pair<string,string>("turquia","Mutlu Noeller"));
    traducoes.insert(pair<string,string>("argentina","Feliz Navidad!"));
    traducoes.insert(pair<string,string>("chile","Feliz Navidad!"));
    traducoes.insert(pair<string,string>("mexico","Feliz Navidad!"));
    traducoes.insert(pair<string,string>("antardida","Merry Christmas!"));
    traducoes.insert(pair<string,string>("canada","Merry Christmas!"));
    traducoes.insert(pair<string,string>("irlanda","Nollaig Shona Dhuit!"));
    traducoes.insert(pair<string,string>("belgica","Zalig Kerstfeest!"));
    traducoes.insert(pair<string,string>("italia","Buon Natale!"));
    traducoes.insert(pair<string,string>("libia","Buon Natale!"));
    traducoes.insert(pair<string,string>("siria","Milad Mubarak!"));
    traducoes.insert(pair<string,string>("marrocos","Milad Mubarak!"));
    traducoes.insert(pair<string,string>("japao","Merii Kurisumasu!"));

    while(getline(cin, pais)){
        if(traducoes.count(pais) == 0){
            cout << "--- NOT FOUND ---" << endl;
        }else{
            cout << traducoes[pais] << endl;
        }
    }

    return 0;
}
