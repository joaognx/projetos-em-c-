#include <iostream>

using namespace std;

int main(){

    long long num; cin >> num;
    long long tempo[num], alice = 0, bob = num-1;

    for (long long i=0; i<num; i++){
        cin >> tempo[i];
    }

    long long somaA = 0, somaB = 0, contA = 0, contB = 0;

    while (alice <= bob){
        if (somaA <= somaB){
            somaA += tempo[alice];
            alice++; contA++;
        }
        else{
            somaB += tempo[bob];
            bob--; contB++;
        }
    }

    cout << contA << " " << contB << endl;

    return 0;
}