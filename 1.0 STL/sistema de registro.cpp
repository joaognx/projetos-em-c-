#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int vzs; cin >> vzs;

    unordered_map<string, int> nomes; string entrada;

    for (int i = 0; i < vzs; i++){
        cin >> entrada;

        if (nomes.find(entrada) == nomes.end()){
            nomes[entrada] = 0;
            cout << "OK" << endl;
        }
 
        else{
            nomes[entrada]++;
            cout << entrada << nomes[entrada] << endl;
        }

    }
    return 0;
}
