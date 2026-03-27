#include <iostream> 

using namespace std;

int main(){
    int tam, buscas; cin>> tam >> buscas;
    long long array[tam+1] = {0};

    for (int i =1; i<= tam; i++){
        long long num;
        cin >> num;
        array[i] = array[i-1] + num;    
    }

    while (buscas--){
        long long i, f; cin>> i >> f;

        cout << array[f] - array[i-1] << endl;
    }
    return 0;
}