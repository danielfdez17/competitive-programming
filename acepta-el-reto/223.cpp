#include<iostream>
#include<vector>
using namespace std;

int multiplicar(const vector<int>& v, int size, int&c, int&f) {
	if (size == 0) return size;
	int seg = 0, maxSeg = 0;
	for (int i = 0; i < size; i++) {
		if (v[i] != 0) {
			seg++;
		}
		else {
			if (seg > maxSeg) {
				c = i - seg;
				f = i - 1;
				maxSeg = seg;
			}
			seg = 0;
		}
	}
	if (seg > maxSeg) {
		c = size - seg;
		f = size - 1;
		maxSeg = seg;
	}
	return maxSeg;
}

void resuelveCaso() {
	int size; cin >> size;
	vector<int>v(size);
	for (int& i : v) cin >> i;
	int c, f, l = multiplicar(v, size, c, f);
	if (l == 0) cout << "SIGUE BUSCANDO\n";
	else cout << l << " -> [" << c << "," << f << "]\n";
}

int main() {
	int numcasos; cin >> numcasos;
	for (int i = 0; i < numcasos; i++) resuelveCaso();
	return 0;
}