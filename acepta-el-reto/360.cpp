#include <iostream>
using namespace std;

void casoDePrueba() {
    int i, m, perdidaDeAgua, rellenado = 0, j;
    cin >> i >> m;
    j = i;
    cin >> perdidaDeAgua;
    while (perdidaDeAgua != -1) {
        i = i - perdidaDeAgua;
        if (i < m) {
            i = j;
            rellenado++;
        }
        cin >> perdidaDeAgua;
    }
    cout << rellenado << endl;
}

int main() {
    unsigned int numCasos, i;
    cin >> numCasos;
    for (i = 0; i < numCasos; ++i)
        casoDePrueba();
    return 0;
}