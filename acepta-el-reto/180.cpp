#include <iostream>
using namespace std;

void casoDePrueba() {
	int a, b, c, aux;
	int hip_c, cats_c;
	cin >> a >> b >> c;

	if ((a < b + c) && (b < c + a) && (c < b + a)) {
		if (a < b) {
			aux = b;
			b = a;
			a = aux;
		}
		if (a < c) {
			aux = c;
			c = a;
			a = aux;
		}
		hip_c = a * a;
		cats_c = b * b + c * c;
		if (hip_c == cats_c) {
			cout << "RECTANGULO" << endl;
		}
		else if (hip_c < cats_c) {
			cout << "ACUTANGULO" << endl;
		}
		else
			cout << "OBTUSANGULO" << endl;
	}
	else
		cout << "IMPOSIBLE" << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}