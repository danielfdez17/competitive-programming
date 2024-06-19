#include<iostream>
#include<vector>
using namespace std;

int contar_picos(vector<int>const& v, int size) {
	int picos = 0;
	for (int i = 1; i < size - 1; i++) {
		if (v[i - 1]<v[i] && v[i]>v[i + 1]) picos++;
	}
	if (v[size - 1]<v[0] && v[0]>v[1]) picos++;
	if (v[size - 2]<v[size - 1] && v[size - 1]>v[0]) picos++;
	return picos;
}


bool resuelveCaso() {
	int size; cin >> size;
	if (size == 0) return false;
	vector<int>v(size);
	for (int& i : v) cin >> i;
	cout << contar_picos(v, size) << "\n";
	return true;
}


int main() {
	while (resuelveCaso());
	return 0;
}