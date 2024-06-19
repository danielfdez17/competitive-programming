#include<iostream>
#include<vector>
using namespace std;

int resolver(vector<int>const& v, int n) {
	int abadias = 1, max = v[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		if (v[i] > max) {
			abadias++;
			max = v[i];
		}
	}
	return abadias;
}

int main() {
	int n; cin >> n;
	while (n != 0) {
		vector<int>v(n);
		for (int& i : v) cin >> i;
		cout << resolver(v, n) << "\n";
		cin >> n;
	}
	return 0;
}