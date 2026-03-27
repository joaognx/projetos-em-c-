#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int vzs; cin >> vzs;
    string s; 

    for (int i=0; i<vzs; i++){
        cin >> s; bool bemdefinida = true;  stack<string> chaves;

        for (char c : s){
            string in (1, c);
        if (in == "(" or in == "{" or in == "["){
            chaves.push(in); 
        }
        else{
            if (chaves.empty()){
                bemdefinida = false;
                break;
            }
            string topo = chaves.top();
            if((topo == "(" && in == ")") or
                    (topo == "[" && in == "]") or
                    (topo == "{" && in == "}")){
                    chaves.pop();
            }
            else {
                bemdefinida = false;
                break;
            }
        }
    }
    if (chaves.empty() && bemdefinida){
            cout << "S" << endl;
        }
        else {
            cout << "N" << endl;
        }}
    return 0; 
}