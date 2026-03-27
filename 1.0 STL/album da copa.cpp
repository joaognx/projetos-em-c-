#include <iostream>
#include <vector>

using namespace std;

int main(){
    int quant, comp, i, j; 
    cin >> quant; cin >> comp;
    vector<int> figs(comp);

    for (i=0; i < comp; i++){
        cin >> figs[i];
    }
    int cont=0;
    for (i=0; i<comp; i++){
        int achou=1;
        for (j= i + 1; j<comp; j++){
            if (figs[i] == figs[j]){
                achou = 0;
            }
        }
        if (achou ==1 ){
        cont++;}
    }

    int falta = quant - cont;

    cout << falta << endl;
    

}