#include <iostream>
using namespace std;

void casoDePrueba() {
	int  litros_t, num_comp, comp_max, litros_dif;

	cin >> num_comp >> comp_max >> litros_dif;

	litros_t = num_comp * comp_max - (litros_dif * (num_comp - 1) * num_comp / 2);

	cout << litros_t << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}