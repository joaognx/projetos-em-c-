#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int cartas;

    while (1){
        cin >> cartas; queue<int> pilha; vector<int> remov;
        if (cartas == 0) break;
        for (int i = 1; i<= cartas; i++){
            pilha.push(i);
        }
        int tam = pilha.size();
        while (tam > 1){
            remov.push_back(pilha.front());
            pilha.pop();
            pilha.push(pilha.front());
            pilha.pop();
            tam -= 1;
        }
        cout << "Discarded cards: ";
        int tamm = remov.size();
        for (int i=0; i<tamm; i++){
            cout << remov[i];
            if (i != tamm - 1) cout << ", ";
        }
        cout << endl;
        cout << "Remaining card: " << pilha.front() << endl;
    }
}