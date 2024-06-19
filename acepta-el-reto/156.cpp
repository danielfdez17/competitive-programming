#include <iostream>
using namespace std;

int main() {
	int llamada; cin >> llamada;
    while (llamada >= 0) {
        int destino; cin >> destino;
        int total = 0, suma = 0;
        while (destino != -1) {
            suma = abs(llamada - destino);
            llamada = destino;
            total += suma;
            cin >> destino;
        }
        cout << total << "\n";
        cin >> llamada;
    }
	return 0;
}