#include<iostream>
#include<vector>
using namespace std;

void imprimir(vector<int>const& v) {
	int s = 0, size = v.size();
	for (int i = 0; i < size - 1; i++) {
		if (v[i] - v[i + 1] == -1) s++;
		else {
			if (s >= 1) cout << v[i - s] << "-";
			cout << v[i];
			if (i != size - 1) cout << ",";
			s = 0;
		}
	}
	if (s >= 1) cout << v[size - 1 - s] << "-";
	cout << v[size - 1] << "\n";
}

bool resuelveCaso() {
	int x; cin >> x;
	if (x == 0) return false;
	vector<int>v;
	while (x != 0) {
		v.push_back(x);
		cin >> x;
	}
	imprimir(v);
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}