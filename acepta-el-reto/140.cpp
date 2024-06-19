#include<iostream>
using namespace std;

void sumar_digitos(long long int n, long long int& suma, int n_digitos) {
	if (n < 10) {
		suma = n;
		if (n_digitos == 0) cout << n << " = " << suma << "\n";
		else cout << n << " + ";
	}
	else {
		int modulo = n % 10;
		sumar_digitos(n / 10, suma, n_digitos + 1);
		suma += modulo;
		cout << modulo;
		if (n_digitos == 0) cout << " = " << suma << "\n";
		else cout << " + ";
	}
}

int main() {
	long long int n, suma; cin >> n;
    while (n >= 0) {
	    sumar_digitos(n, suma, 0);
        cin >> n;
    }
	return 0;
}