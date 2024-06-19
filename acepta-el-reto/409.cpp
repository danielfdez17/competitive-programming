// Seleccionando castellers 409
#include <iostream>
using namespace std;

void casoDePrueba() {
    int nPersonas, porNivel, alturas[100], aux, pos, altMinima, nPisos = 0;
    bool pisoPosible = true;
    cin >> porNivel >> nPersonas;
    for (int i = 0; i < nPersonas; i++)
        cin >> alturas[i];
    for (int i = 1; i < nPersonas; i++) {
        bool encontrado = false;
        aux = alturas[i];
        pos = 0;
        while (!encontrado && pos < i) {
            if (alturas[pos] > aux)
                encontrado = true; 
            else
                pos++;
        }
        for (int j = i; j > pos; j--)
            alturas[j] = alturas[j - 1];
        alturas[pos] = aux;
    }
    for (int i = 0; i < nPersonas - porNivel + 1; i++) {
        altMinima = alturas[i];
        for (int j = i; j < i + porNivel && j < nPersonas; j++) {
            if (alturas[j] > altMinima + 15)
                pisoPosible = false;
        }
        if (pisoPosible) {
            i = i + porNivel - 1;
            nPisos++;
        }
        pisoPosible = true;
    }
    cout << nPisos << endl;
}
int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++)
		casoDePrueba();
	return 0;
}