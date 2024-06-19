#include <iostream>
using namespace std;

bool resuelveCaso() {
	int size; cin >> size;
	if (!cin) return false;
	int max = -1;
	for (int i = 0; i < size; i++) {
		int aux; cin >> aux;
		max = std::max(aux, max);
	}
	cout << max << "\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}