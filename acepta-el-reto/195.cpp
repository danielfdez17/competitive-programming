// Saltos de trampolín 195
#include <iostream>
using namespace std;

const int NOTAS = 7, CD = 2;
bool casoDePrueba() {
    double saltos[NOTAS];
    cin >> saltos[0];
    if (!cin)
        return false;
    else {
        int nota;
        double suma_notas = 0;
        for (int i = 1; i < NOTAS; i++)
            cin >> saltos[i];
        int pos;
        double aux;
        for (int i = 1; i < NOTAS; i++) {
            bool encontrado = false;
            aux = saltos[i];
            pos = 0;
            while ((!encontrado) && (pos < i)) {
                if (saltos[pos] > aux)
                    encontrado = true;
                else
                    pos++;
            }
            for (int j = i; j > pos; j--)
                saltos[j] = saltos[j - 1];
            saltos[pos] = aux;
        }
        for (int i = 2; i < NOTAS - 2; i++)
            suma_notas += saltos[i];
        nota = suma_notas * CD;
        cout << nota << endl;
        return true;
    }

}
int main() {
    while (casoDePrueba());
    return 0;
}