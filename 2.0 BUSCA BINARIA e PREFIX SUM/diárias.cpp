#include <iostream>
#include <vector>

using namespace std;

int main(){

    int vzs, dias, valor; cin >> vzs;
    vector<int> valorday;

    for (int i=0; i< vzs; i++){
        cin >> dias >> valor;
        for (int j = 0; j < dias; j++){
            valorday.push_back(valor);
        }
    }

    int somadays = valorday.size();
    vector<long long> soma(somadays+1, 0);

    for (int i =1; i <= somadays; i++){
        soma[i] = valorday[i-1] + soma[i-1];
    }

    int qnt; cin >> qnt;
    while (qnt--){
        int i, f; cin >> i >> f;

        cout << soma[f] - soma[i-1] << endl;
    }

    return 0;
}