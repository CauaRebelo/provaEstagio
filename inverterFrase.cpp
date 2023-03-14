#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;
    cout << "Digite sua frase: " << endl;
    cin >> frase;
    cout << "Sua frase é: " << frase << endl;
    int tamanho = frase.length();
    for (int aux = 0; aux < tamanho / 2; aux++) {
        char caracterio = frase[aux];
        frase[aux] = frase[tamanho - aux - 1];
        frase[tamanho - aux - 1] = caracterio;
    }
    cout << "Sua frase invertida é: " << frase << endl;
    return 0;
}