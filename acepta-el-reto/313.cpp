#include <iostream>
using namespace std;

void casoDePrueba() {
	int saldo, cambio, suma;
	cin >> saldo >> cambio;
	suma = saldo + cambio;
	if (suma >= 0)
		cout << "SI" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}