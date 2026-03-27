#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){

    while (true){

        double num, area, soma = 0; 
        cin >> num >> area;

        if (num == 0 && area == 0) break;

        vector<double> tam(num); 
        for (int i = 0; i <num; i++){
            cin >> tam[i];
            soma += tam[i];
        }

        if (soma == area){
            cout << ":D" << endl;
            continue;
        }

        if (soma < area){
            cout << "-.-" << endl;
            continue;
        }

        double esq =0, dir = 100000, media, corte;
        while (dir - esq > 0.000001){
            media = (esq + dir)/2;
            corte = 0;
            for (int i= 0; i <num; i++){
                if (tam[i] > media){
                    corte += tam[i] - media;
                }
            }

            if (corte < area) dir = media;
            else esq = media;
        }

        cout << fixed << setprecision(4);
        cout << esq << endl;
    }
    
    return 0;
}