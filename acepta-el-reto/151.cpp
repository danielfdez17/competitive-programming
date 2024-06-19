#include <iostream>
using namespace std;

int main() {
    int filas;
    cin >> filas;
    while (filas != 0) {
        bool es_identidad = true;
        for (int i = 0; i < filas; i++)
            for (int j = 0; j < filas; j++) {
                int x; cin >> x;
                if ((i == j && x != 1) || (x != 0 && i != j)) es_identidad = false;
            }
        cout << (es_identidad ? "SI\n" : "NO\n");
        cin >> filas;
    }
    return 0;
}