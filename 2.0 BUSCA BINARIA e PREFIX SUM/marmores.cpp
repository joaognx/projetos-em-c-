#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int numcaso = 1;
    while (1){
        int marmores, consultas; 
        cin >> marmores >> consultas;

        if (marmores == 0 && consultas == 0) break;

        vector<int> nums(marmores + 1, 0);
        for (int i = 1; i<=marmores; i++){
            cin >> nums[i];
        }
        
        sort(nums.begin(), nums.end());

        cout << "CASE# " << numcaso++ << ":" << endl;

        for (int i = 0; i<consultas; i++){
            int found; cin >> found;

            int esq = 1, dir = marmores, media, resp = -1;
            while (esq <= dir){
                media = (esq + dir)/2;

                if (nums[media] == found){
                     resp = media;
                     break;}
                else if (nums[media]> found) dir = media - 1; 
                else esq = media + 1;
            }
            
            if (resp != -1){
            cout << found << " found at " << resp << endl;}
            else {
                cout << found << " not found" << endl;
            }
        }
    }

    return 0; 
}