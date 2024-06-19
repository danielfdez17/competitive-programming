#include <iostream>
#include <iomanip>
using namespace std;

void casoDePrueba() {
	int cuad_ancho, cuad_alto, cuad_receta, tabletas;
	cin >> cuad_ancho >> cuad_alto >> cuad_receta;
	tabletas = cuad_receta / (cuad_ancho * cuad_alto) + int(cuad_receta % (cuad_ancho * cuad_alto) > 0);
	cout << tabletas << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}