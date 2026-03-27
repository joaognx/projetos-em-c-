#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    int vzs; cin>>vzs;
    cin.ignore();

    for (int i=0; i < vzs; i++){
        cout << endl;
        map<string, float> trees; int cont=0;
        while (1){
            string esp; getline(cin, esp);
            if (esp.empty()) break;
            trees[esp]++;
            cont++;
        }
        for (const auto& par : trees){
            cout << setprecision(4) << fixed;
            cout << par.first << " " << (par.second/cont)*100 << endl;
        }
        if (i < vzs -1){ cout << endl;}
    }
}