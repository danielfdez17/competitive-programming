#include <iostream>
using namespace std;

bool casoDePrueba ()
{
    int nVivienda;
    cin >> nVivienda;

    if (nVivienda == 0) {
        return false;
    }
    else {
     if (nVivienda % 2 == 0) {
         cout << "DERECHA" << endl;
     }
     else {
         cout << "IZQUIERDA" << endl;
     }

    return true;
    }
}

int main() {

    while (casoDePrueba ()) {
    }
    return 0;
}