#include <iostream>
using namespace std;

void casoDePrueba() {
	const int PATASinsectos = 6, PATASaracnidos = 8, PATAScrustaceos = 10, PATASescolopendras = 2;
	int insectos, aracnidos, crustaceos, escolopendras, anillos;
	int numPATAS;

	cin >> insectos >> aracnidos >> crustaceos >> escolopendras >> anillos;
	numPATAS = (PATASinsectos * insectos) + (PATASaracnidos * aracnidos) + (PATAScrustaceos * crustaceos) + (PATASescolopendras * escolopendras * anillos);
	cout << numPATAS << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}