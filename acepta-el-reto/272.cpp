#include<iostream>
using namespace std;

const int BASE = 6;

void convertir(int n) {
	if (n / BASE == 0) cout << n;
	else if (n / BASE < BASE) cout << n / BASE << n % BASE;
	else {
		convertir(n / BASE);
		cout << n % BASE;
	}
	cout << "\n";
}

void resuelveCaso() {
	int n; cin >> n;
	convertir(n);
}

int main() {
	int numcasos; cin >> numcasos;
	for (int i = 0; i < numcasos; i++) resuelveCaso();
	return 0;
}