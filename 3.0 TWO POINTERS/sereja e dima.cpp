#include <iostream>
#include <vector>


using namespace std;

int main(){
    int num; cin >> num;
    vector<int> cartas(num);

    for (int i = 0; i<num; i++){
        cin >> cartas[i];
    }
    
    int sereja = 0, dima =0, left= 0, right = num -1;
    bool serejasTime = true;
    while (left <= right){
        if (cartas[left] > cartas[right]){
            if (serejasTime){
                sereja += cartas[left];
                serejasTime = false;
            }
            else{
                dima += cartas[left];
                serejasTime = true;
            }
            left++;
        }

        else{
            if (serejasTime){
                sereja += cartas[right];
                serejasTime = false;
            }
            else{
                dima += cartas[right];
                serejasTime = true;
            }
            right--;
        }

        }
    
    cout << sereja << " " << dima << endl;

    return 0;
}