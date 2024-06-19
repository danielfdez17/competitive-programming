#include<iostream>
#include<vector>
using namespace std;

struct tsol {
	bool sepuede;
	int posicion;
};

tsol bocadillos(vector<int>const& v, int size) {
	int suma = 0, pos; bool encontrado = false;
	for (int i = size - 1; i >= 0; i--) {
		if (v[i] == suma) {
			encontrado = true;
			pos = i + 1;
		}
		suma += v[i];
	}
	if (encontrado) return { true,pos };
	return { false, 0 };
}


bool resuelveCaso() {
	int cortezas; cin >> cortezas;
	if (cortezas == 0) return false;
	vector<int>v(cortezas);
	for (int& i : v) cin >> i;
	tsol sol = bocadillos(v, cortezas);
	if (sol.sepuede) cout << "SI " << sol.posicion << "\n";
	else cout << "NO\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}