#include <iostream>
#include <string>
using namespace std;

const int CARRETERAS = 10000;

void casoDePrueba() {

	string aux, carretera[CARRETERAS];
	int contadorTunel = 0, contador = 0;
	bool tunel = true;

	cin >> aux;
	int longitud = aux.size();

	for (int i = 0; i < longitud; i++)
		carretera[i] = aux.at(i);

	for (int i = 0; i < longitud; i++) {
		if (carretera[i] == ".") {
			contador++;
			if (contador == 3) {
				contador = 0;
				contadorTunel++;
			}
		}
		else {
			if (contador == 1) {
				contador = 0;
				contadorTunel++;
				i++;
			}
			else if (contador == 2) {
				contador = 0;
				contadorTunel++;
			}
		}
	}
	if (contador != 0)
		contadorTunel++;

	cout << contadorTunel << endl;

}
int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++)
		casoDePrueba();
	return 0;
}