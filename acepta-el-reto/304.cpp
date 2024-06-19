#include <iostream>
using namespace std;

void casoDePrueba() {
	int D, d, C, R;
	cin >> D >> d;
	if (d == 0)
		cout << "DIV0" << endl;
	else if ((D > 0 && d > 0) || (D > 0 && d < 0)) {
		C = D / d;
		R = D % d;
		cout << C << " " << R << endl;
	}
	else if (D < 0 && d > 0) {
		C = D / d - 1 * (-D % d != 0);
		R = D - (d * C);
		cout << C << " " << R << endl;
	}
	else {
		C = D / d + 1 * (-D % d != 0);
		R = D - (d * C);
		cout << C << " " << R << endl;
	}
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}