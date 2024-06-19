#include <iostream>
using namespace std;

void casoDePrueba() {
    int nVecinos, nButacas, suma = 0, impar = 0;
    cin >> nVecinos;
    for (int i = 1; i <= nVecinos; i++) {
        cin >> nButacas;
        if (nButacas % 2 == 1) {
            suma++;
            impar++;
        }
        else
            suma = 0;
    }
    if ((suma == impar) || (nVecinos == 0))
        cout << "SI " << nVecinos - impar << endl;
    else
        cout << "NO" << endl;
}

int main() {

    unsigned int numCasos, i;
    cin >> numCasos;
    for (i = 0; i < numCasos; ++i)
        casoDePrueba();
    return 0;
}