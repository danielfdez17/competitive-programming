// Conjuritis 478
#include <iostream>
using namespace std;

int main() {
    int casos, i, j;
    long long int danio_real, danio_esperado, diferencia;

    while ((cin >> casos) && (casos != 0)) {
        int danio[casos];
        danio_esperado = 0;
        for (int i = 0; i < casos; i++) {
            cin >> danio[i];
            danio_esperado += danio[i];
        }
        cin >> danio_real;
        diferencia = danio_esperado - danio_real;
        i = 0;
        j = casos - 1;
        while (true) {
            if (danio[i] + danio[j] == diferencia) {
                cout << danio[i] << " " << danio[j] << endl;
                break;
            }
            else if (danio[i] + danio[j] > diferencia)
                j--;
            else
                i++;
        }
    }

    return 0;
}