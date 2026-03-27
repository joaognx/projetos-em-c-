#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int idas, prods, compras, i, j; cin >> idas;

    for (i=0; i < idas; i++){
        cin >> prods;
        vector<string> nomes; vector<float> valor;

        for (j=0; j<prods; j++){
            string nome; float preco;
            cin >> nome >> preco;
            nomes.push_back(nome); valor.push_back(preco);
        }

        cin >> compras;

        float soma=0;
        for (j=0; j<compras; j++){
            string escolha; int quant; 
            cin >> escolha >> quant;
            for (int k=0; k < prods; k++){
                if (escolha == nomes[k]){
                    soma += valor[k] * quant;
                }
            }
        }
        cout << setprecision(2) << fixed;
        cout << "R$ " << soma << endl;

    }

    return 0;

}