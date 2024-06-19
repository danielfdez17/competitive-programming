#include <iostream>
using namespace std;

bool casoDePrueba() {
    int nFamilias, nHijos, midiclorianos, fuerza, poder_total, poder_hijos[20];
    cin >> nFamilias;
    if (nFamilias == 0)
        return false;
    else {
        for (int i = 0; i < nFamilias; i++) {
            cin >> nHijos >> midiclorianos;
            poder_total = 0;
            for (int j = 0; j < nHijos; j++) {
                cin >> fuerza;
                if ((fuerza * midiclorianos) >= poder_total) {
                    poder_total = fuerza * midiclorianos;
                    poder_hijos[i] = poder_total;
                }
            }
        }
        bool inter = true;
        int i = 0;
        while ((i < nFamilias - 1) && (inter)) {
            inter = false;
            for (int j = nFamilias - 1; j > i; j--) {
                if (poder_hijos[j] > poder_hijos[j - 1]) {
                    int tmp;
                    tmp = poder_hijos[j];
                    poder_hijos[j] = poder_hijos[j - 1];
                    poder_hijos[j - 1] = tmp;
                    inter = true;
                }
            }
            if (inter)
                i++;
        }
        for (int i = 0; i < nFamilias; i++) {
            if (i == nFamilias - 1)
                cout << poder_hijos[i];
            else
                cout << poder_hijos[i] << " ";
        }
        cout << endl;
        return true;
    }
}
int main() {
    while (casoDePrueba()) {
    }
    return 0;
}