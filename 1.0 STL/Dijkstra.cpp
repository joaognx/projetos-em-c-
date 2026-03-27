#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    set<string> joias; string joia;

    while (cin >> joia){
        joias.insert(joia);
    }

    cout << joia.size() << endl;

    return 0;
}