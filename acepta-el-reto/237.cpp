#include<iostream>
#include<string>
using namespace std;

bool polidivisible(long long int n, int l) {
	if (l == 1) return true;
	if (n % l == 0) return polidivisible(n / 10, l - 1);
	return false;
}

bool resuelveCaso() {
	long long int n; cin >> n;
	if (!cin) return false;
	cout << (polidivisible(n, to_string(n).length()) ? "" : "NO ") << "POLIDIVISIBLE\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}