#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero;
    cout << "Digite um número para ver se ele pertence a sequência Fibonacci: " << endl;
    cin >> numero;
    int x = 0, y = 1, z;
    while (y < numero) {
        z = x + y;
        x = y;
        y = z;
    }
    if (y == numero) {
        cout << numero << " pertence à sequência Fibonacci." << endl;
    } else {
        cout << numero << " não pertence à sequência Fibonacci." << endl;
    }
    return 0;
}