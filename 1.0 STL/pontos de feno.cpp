#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
    int words, cargos; cin >> words >> cargos;
    unordered_map<string, double> valores;

    for (int i =0; i<words; i++){
        string nome; double preco; cin >> nome >> preco;
        valores[nome] = preco;
    }
    cin.ignore();
    for (int i=0; i<cargos; i++){
        double soma =0;
        string frase; 
        while(getline(cin, frase)){
            if (frase == ".") {break;}

            stringstream ss(frase);
            string palavra;
            while (ss >> palavra){
                if (valores.count(palavra)){
                    soma += valores[palavra];
                }
            }
            }
            
            cout << fixed << setprecision(0) << soma <<endl;
    }

    return 0;
}