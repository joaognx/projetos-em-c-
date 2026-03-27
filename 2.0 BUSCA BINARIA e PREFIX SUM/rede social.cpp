#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){

    int posts; cin >> posts;
    vector<int> repost(posts);

    for (int i=0; i<posts; i++){
        cin >> repost[i];
    }

    sort(begin(repost), end(repost));

    long long esq=0, dir = posts, cont = 0, resultado=0;
    while(esq <= dir){
        cont = 0;
        int media = (esq + dir)/ 2;
        
        for (int i = 0; i<posts; i++){
            if (repost[i] >= media){
                cont++;
            }
        }

        if (cont >= media){
            resultado = media;
            esq = media + 1;
        }
        else{
            dir = media - 1;
        }

    }

    cout << resultado << endl;
    return 0;
    
}