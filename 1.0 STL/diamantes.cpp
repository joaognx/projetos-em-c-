#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int vzs, i; cin >> vzs;

    for (i=0; i<vzs; i++){
        string d; cin >> d; 
        stack<char> ok; int cont =0;
        for (char c : d){
            if (c == '<'){
                ok.push(c);
            }
            else if (c == '>'){
                if (ok.size() > 0){
                    ok.pop();
                    cont++;}
            }
        }
        cout << cont << endl;
    }

    return 0;
}