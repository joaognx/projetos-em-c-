#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int vzs, menor; cin >> vzs;
    string op; int num; 
    stack<int> presente;

    for (int i=0; i<vzs; i++){
        cin>> op;
        if (op == "PUSH"){
            cin >> num;
            if (presente.empty()){
                presente.push(num);}
            else {
                menor = min(num, presente.top());
                presente.push(menor);
            }
        }
        if (op == "MIN"){
            if (presente.empty()){
                cout << "EMPTY" << endl;
            }
            else{   
                cout << presente.top() << endl;}
        }
        if (op == "POP"){
            if (presente.empty()){
                cout << "EMPTY" << endl;
            }
            else{
            presente.pop();}
        }
    }
}