#include<iostream>
#include<vector>
using namespace std;

// Solucion de Jorge Villarrubia Elvira (@Jorgitou98 en GitHub)

long long int resolver(vector<int>const& v, int size) {
	if (size == 1) return 0;
	long long int parejas = 0, suma = v[size - 1];
	for (int i = size - 2; i >= 0; i--) {
		parejas += (v[i] * suma);
		suma += v[i];
	}
	return parejas;
}

int main() {
	int n; cin >> n;
	while (n != 0) {
		vector<int>v(n);
		for (int& p : v) cin >> p;
		cout << resolver(v, n) << "\n";
		cin >> n;
	}
	return 0;
}