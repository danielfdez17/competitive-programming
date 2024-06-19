#include<iostream>
#include<vector>
using namespace std;

int digestion(vector<int>const& v, int size, int k) {
	int seg = 0, maxSeg = 0, ceros = 0;
	for (int i = 0; i < size; i++) {
		maxSeg = std::max(seg, maxSeg);
		if (v[i] == 0) {
			ceros++;
			if (ceros > k) {
				ceros = k;
				seg = 0;
			}
			else {
				seg++;
			}
		}
		else {
			seg++;
			ceros = 0;
		}
	}
	return std::max(seg, maxSeg);
} 

bool resuelveCaso() {
	int size, k; cin >> size >> k;
	if (size == 0 && k == 0) return false;
	vector<int>v(size);
	for (int& i : v) cin >> i;
	cout << digestion(v, size, k) << "\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}