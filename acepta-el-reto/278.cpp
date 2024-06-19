#include <iostream>
#include <iomanip>
using namespace std;

void casoDePrueba() {
    long int ddI, hhI, mmI, ssI, ssT, hhL, mmL, ssL, ssLT, total = 0;
    bool verdadero = false;
    char simbolo;


    cin >> ddI >> simbolo >> hhI >> simbolo >> mmI >> simbolo >> ssI;
    ssT = ddI * 24 * 3600 + hhI * 3600 + mmI * 60 + ssI;
    cin >> hhL >> simbolo >> mmL >> simbolo >> ssL;
    if (hhL == 0 && mmL == 0 && ssL == 0)
        verdadero = true;

    while (!verdadero) {
        ssLT = hhL * 3600 + mmL * 60 + ssL;
        total = total + ssLT;
        cin >> hhL >> simbolo >> mmL >> simbolo >> ssL;
        if (hhL == 0 && mmL == 0 && ssL == 0)
            verdadero = true;
    }
    if (total < ssT)
        cout << "SI" << endl;
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