#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long q, p; cin >> q >> p;
    long long pares[q];

    for (long long i =0; i<q; i++){
        cin >> pares[i];
    }

    for (long long i = 0; i < p; i++){
        long long pesq; cin >> pesq;
        long long esq = 0, dir = q-1, media, resp=-1;
        while (esq <= dir){
            media = (esq + dir)/2;

            if (pares[media] >= pesq){
                resp = media;
                dir = media - 1;
                }
            else esq = media + 1;

        }
        if (pares[media] != pesq) cout << "-1" << endl;
        else cout << resp << endl;
    }
    return 0;
}