#include <iostream>
using namespace std;

void casoDePrueba() {
    int pinchazo1, pinchazo2, giro;
    cin >> pinchazo1 >> pinchazo2;

    if (pinchazo2 >= pinchazo1) {
        giro = pinchazo2 - pinchazo1;
        if ((giro == 180) || (giro == 0))
            cout << "DA IGUAL" << endl;
        else if ((giro == 360) || (giro == 0))
            cout << "DA IGUAL" << endl;
        else if (giro > 180)
            cout << "DESCENDENTE" << endl;
        else if (giro < 180)
            cout << "ASCENDENTE" << endl;
    }
    else {
        giro = pinchazo1 - pinchazo2;
        if (giro > 180)
            cout << "DESCENDENTE" << endl;
        else 
            cout << "ASCENDENTE" << endl;
    }
}

int main()
{

    unsigned int numCasos, i;
    cin >> numCasos;
    for (int i = 0; i < numCasos; i++)
        casoDePrueba();
    return 0;
}