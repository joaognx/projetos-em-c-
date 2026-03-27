#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int vzs; scanf("%d", &vzs); queue<int> fila;

    while (vzs--){
        int op; scanf("%d", &op);
        if (op == 1){
            int num; scanf("%d", &num);
            fila.push(num);
        }
        else if (op ==2){
            if (!fila.empty()) fila.pop();
        }
        else {
           if (!fila.empty()){
             printf("%d\n", fila.front());}
           else {
            printf("Empty!\n");}
        }
    }

    return 0;
}