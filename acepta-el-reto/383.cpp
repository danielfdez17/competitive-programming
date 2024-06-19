#include<iostream>
#include<vector>
using namespace std;

int alcance(vector<int>const& v, int size) {
	int max = v[0], salto = -1;
	for (int i = 1; i < size; i++) {
		salto = std::max(salto, max - v[i]);
		max = std::max(max, v[i]);
	}
	return salto;
}

void resuelveCaso() {
	int size; cin >> size;
	vector<int>v(size);
	for (int& i : v) cin >> i;
	cout << alcance(v, size) << "\n";
}

int main() {
	int numcasos; cin >> numcasos;
	for (int i = 0; i < numcasos; i++) resuelveCaso();
	return 0;
}