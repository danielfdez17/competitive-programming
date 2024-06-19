#include<iostream>
#include<vector>
using namespace std;

bool saliendoDeLaCrisis(vector<int>const& v, int size) {
	int i = 0; bool saliendo = true;
	while (i < size - 1 && saliendo) {
		saliendo = v[i] < v[i + 1];
		i++;
	}
	return saliendo;
}

bool resuelveCaso() {
	int size; cin >> size;
	if (size == 0) return false;
	vector<int>v(size);
	for (int& i : v) cin >> i;
	cout << (saliendoDeLaCrisis(v, size) ? "SI\n" : "NO\n");
	return true;
}


int main() {
	while (resuelveCaso());
	return 0;
}