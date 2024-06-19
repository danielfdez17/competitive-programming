#include<iostream>
#include<vector>
using namespace std;

int seisDedos(vector<int>const& v, int size, int a) {
	if (a >= size) return size;
	int seg = 0, maxSeg = 0;
	for (int i = 0; i < size; i++) {
		maxSeg = std::max(seg, maxSeg);
		if (seg != a) {
			seg++;
		}
	}
	return maxSeg + 1;
}

bool resuelveCaso() {
	int nacimientos, anios; cin >> nacimientos >> anios;
	if (nacimientos == 0 && anios == 0) return false;
	vector<int>v(nacimientos);
	for (int& i : v) cin >> i;
	cout << seisDedos(v, nacimientos, anios) << "\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}