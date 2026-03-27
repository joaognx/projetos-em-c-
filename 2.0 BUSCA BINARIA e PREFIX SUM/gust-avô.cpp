#include <iostream>
#include <vector>

using namespace std;

int main(){

    int vzs; cin >> vzs;

    for (int i =0; i<vzs; i++){

        string pUm, pDois;
        cin >> pUm >> pDois;
        int tamUm = pUm.size();

        long long dir = tamUm, esq = 0, media, resp = 0; 
        while (esq <= dir){
            media = (esq + dir)/2;
            
            int A = pUm.size(), B = pDois.size(), aux = 0;
            bool ok = true;

            for (int b = 0; b < B; b++){
                for (int i = 0; i< media; i++){
                    while (aux < A && pUm[aux] != pDois[b]) aux++;
                    if (aux == A){
                        ok = false;
                        break;
                    }
                    aux++;
                }
                if (!ok) break;
            }

            if (ok){
                resp = media;
                esq = media +1;
            }
            else dir = media - 1;
        }
        cout << resp << endl;
    }
    return 0;
}