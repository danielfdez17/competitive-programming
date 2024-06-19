#include <iostream>
using namespace std;

void casoDePrueba() {
	int mejillones, conchas = 0, suma = 0;
	cin >> mejillones;
	while (mejillones != -1) {
		suma += mejillones;
		cin >> mejillones;
		conchas++;
	}
	if (suma > conchas)
		cout << "Suerte" << endl;
	else if (suma < conchas)
		cout << "Timo" << endl;
	else
		cout << "Justo" << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++)
		casoDePrueba();
	return 0;
}