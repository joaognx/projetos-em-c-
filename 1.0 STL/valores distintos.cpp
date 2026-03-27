#include <iostream>
#include <set>

using namespace std;

int main(){
    int vzs; cin >> vzs; set<int> nums;

    for (int i=0; i<vzs; i++){
        int in; cin >> in;
        nums.insert(in);
    }

    cout << nums.size() << endl;
    return 0;
}