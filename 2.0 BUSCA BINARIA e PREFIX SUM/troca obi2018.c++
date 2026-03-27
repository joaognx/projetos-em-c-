#include <iostream>
#include <vector> 

using namespace std;

int main(){
    int qnt, op; cin >> qnt >> op;
    vector<int> cima(qnt), baixo(qnt), mudar(qnt+1,0);

    for (int i =0; i< qnt; i++){
        cin >> cima[i];
    }
    for (int i =0; i< qnt; i++){
        cin >> baixo[i];
    }

    while (op--){
        int a, b; cin >> a >> b;
        mudar[a-1]++;
        mudar[b]--;
    }
    
    int ok=0;
    for (int i =0; i< qnt; i++){
        ok += mudar[i];

        if (ok % 2 == 0) cout << cima[i] << " ";
        else cout << baixo [i] << " ";
    }

    cout << endl;
    
    return 0;
}