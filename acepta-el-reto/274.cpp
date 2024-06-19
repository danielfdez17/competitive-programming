#include <iostream> 
using namespace std; 

void casoDePrueba() {
	int A, S, D, semanas;
	cin >> A >> S >> D;
	semanas = A / S;

	if (D < S) {
		semanas = (A / S) - 1;
	}
	cout << semanas << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}