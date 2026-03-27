#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int caps, moedas; cin >> caps >> moedas;
    vector<int> ciclos(caps); 

    for (int i =0; i<caps; i++){
        cin >> ciclos[i];
    }

    long long esq = 1, dir = 1e8, resposta = dir;

    while (esq <= dir){
        long long meio = esq + (dir-esq) / 2, totalMoedas =0;

        for (int i = 0; i <caps; i++){
            totalMoedas += meio/ciclos[i];

            if (totalMoedas >= moedas) break;
        }

        if (totalMoedas >= moedas){
            resposta = meio;
            dir = meio - 1;
        }
        else {
            esq = meio + 1;
        }
    }

    cout << resposta << endl;

    return 0;
}