#include<iostream>
using namespace std;

int main() {
	int numcasos; cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		int n, factorial = 1, ultimodigito = 0; cin >> n;
		if (n < 5) {
			while (n > 0) {
				factorial *= n;
				n--;
			}
			ultimodigito = factorial % 10;
		}
		cout << ultimodigito << "\n";
	}
	return 0;
}