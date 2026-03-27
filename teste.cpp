#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int vzs;
    cin >> vzs;
    cin.ignore(); // Ignorar o '\n' deixado pelo `cin`

    map<string, float> trees;

    for (int i = 0; i < vzs; i++) {
        while (true) {
            string esp;
            getline(cin, esp); // Usar getline para capturar a entrada (inclusive vazia)
            if (esp.empty()) break; // Linha vazia para encerrar

            // Atualizar o contador de árvores
            trees[esp]++;
        }
    }

    // Exibir o resultado
    for (const auto& [nome, valor] : trees) {
        cout << nome << " " << 50 / valor << endl;
    }

    return 0;
}
