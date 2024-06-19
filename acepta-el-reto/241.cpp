#include <iostream>
using namespace std;

void casoDePrueba() {
    int nHojas, hojas_trebol;
    cin >> nHojas;
    if (nHojas <= 2)
        cout << "IMPOSIBLE" << endl;
    else {
        hojas_trebol = nHojas % 3;
        cout << hojas_trebol << endl;
    }
}

int main() {
    unsigned int numCasos, i;
    cin >> numCasos;
    for (i = 0; i < numCasos; i++) {
        casoDePrueba();
    }
    return 0;
}