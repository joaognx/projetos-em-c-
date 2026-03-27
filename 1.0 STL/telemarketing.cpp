#include <iostream>
#include <vector>

using namespace std;

int main(){
    int lig, vend; cin >> lig >> vend;
    vector<int> num_lig; vector<int> num_vend;

    for (int i=0; i<lig; i++){
        int num; cin >> num;
        num_lig.push_back(num);
    }
    
    while (lig > vend){
        int i=0;
        num_vend[i]++; i++;
        lig--;
    }
}