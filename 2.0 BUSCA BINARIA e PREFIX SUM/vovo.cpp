#include <iostream>

using namespace std;

int main(){

    int dia, saldo; cin >> dia >> saldo; 
    int movimento[dia+1]; 

    for (int i=1; i<=dia; i++){
        cin >> movimento[i];
    }

    int prefixsum[dia+1] = {0}, menorSaldo = saldo; prefixsum[0] = saldo;
    for (int i =1; i <=dia; i++){
        prefixsum[i] = prefixsum[i-1] + movimento[i];
        for (int j = 1; j<=i; j++){
            if (prefixsum[j] < menorSaldo){
                menorSaldo = prefixsum[i];
            }
        }
    }

    cout << menorSaldo << endl;

    return 0;
}