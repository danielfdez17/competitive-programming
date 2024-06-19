#include <iostream>
using namespace std;

int main() {
	int legionarios, cuadrado, escudos;
    while (cin >> legionarios && legionarios != 0) {
		escudos = 0;
        while (legionarios != 0) {
            cuadrado = 1; 
            while (cuadrado * cuadrado <= legionarios) {
                cuadrado++;
            }
            cuadrado--;
            legionarios = legionarios - cuadrado * cuadrado;
            escudos = escudos + cuadrado * cuadrado + 4 * cuadrado;
        }
        cout << escudos << "\n";
    }
	return 0;
}