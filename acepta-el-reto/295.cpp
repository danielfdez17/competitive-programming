#include<iostream>
using namespace std;

const int K = 31543;

long long int elevame(long long int x, int n) {
	if (n == 0) return 1;
	long long int aux = elevame(x, n / 2);
	long long int a = aux * aux;
	return (n % 2 == 0 ? a : a * (x % K)) % K;
}

bool resuelveCaso() {
	long long int x; int n; cin >> x >> n;
	if (x == 0 && n == 0) return false;
	cout << elevame(x, n) << "\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}