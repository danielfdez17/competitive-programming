#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string aux, nombre; cin >> aux >> nombre;
		cout << "Hola, " << nombre << ".\n";
	}
	return 0;
}