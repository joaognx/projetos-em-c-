#include <iostream>

using namespace std;

int main(){

    int qnt, tempo; cin >> qnt >> tempo;
    int livros[qnt+1];

    int soma = 0; 
    for (int i = 1; i<= qnt; i++){
        cin >> livros[i];
    }

    int cmc = 1, fnl = 1, lido=0;
    while (cmc <= qnt){

        while (fnl <= qnt && soma + livros[fnl] <= tempo){
            soma += livros[fnl];
            fnl++;
        }
        
        //10 9 1 1 5 10 5 3 7 2
        if (fnl - cmc > lido ) lido = fnl - cmc;

        soma -= livros[cmc];
        cmc++;

       
    }
    
    cout << lido << endl;

    return 0;
}