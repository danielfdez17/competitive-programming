#include <iostream>
using namespace std;

void casoDePrueba() {
	int cuad_hor, cuad_ver, cerillas_h, cerillas_v;
	cin >> cuad_hor >> cuad_ver;
	cerillas_h = cuad_hor * 4;
	cerillas_v = cuad_ver * 4;

	if ((cuad_hor == 1) && (cuad_ver == 1)) {
		cerillas_h = cuad_hor * 2;
		cerillas_v = cuad_ver * 2;
	}
	cout << cerillas_h + cerillas_v << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
} 