#include <iostream>
#include <queue>
#include <string>
//errado
using namespace std;

int main(){
    int vzs, cont=0; cin >> vzs;
    queue<string> nomes;

    for (int i =0; i<vzs; i++){
        int tam, j; string nome; cin >> tam;

        string letra = "";
        for (j=0; j<tam; j++){
            cin >> nome;
            letra += nome[0];
        }
        nomes.push(letra);
        if (nomes.size() > 0 and letra != nomes.front()){
            cont++;
        }
    }

    cout << cont << endl;
    return 0;
}