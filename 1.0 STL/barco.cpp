#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    int vzs,i; cin >> vzs;

    for (i=0; i<vzs; i++){
        int tam, carros; cin >> tam >> carros;

        string lado; int tamcarro; queue<int> esq; queue<int> dir;

        for (int j=0; j<carros; j++){
            cin >> tamcarro >> lado;
            if (lado == "left"){
                esq.push(tamcarro);
            }
            else{
                dir.push(tamcarro);
            }
        }

        int soma = 0, cont =0; bool esquerdo = true;
        while (esq.size() > 0 or dir.size()>0 or soma > 0){
            if (esquerdo){
                if (esq.empty() or soma + esq.front() > (tam*100)){
                    esquerdo = false;
                    soma = 0;
                    cont++;
                }
                else{
                    soma += esq.front();
                    esq.pop();
                }
            }
            else {
                if(dir.empty() or dir.front() + soma > (tam*100)){
                    cont++;
                    esquerdo = true;
                    soma =0;
                }
                else{
                    soma += dir.front();
                    dir.pop();
                }
            }
        }
        cout << cont << endl;
    }
    
    return 0;
}