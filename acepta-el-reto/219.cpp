#include<iostream>
using namespace std;

int main() {
	int numcasos; cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		int size, pares = 0; cin >> size;
		for (int j = 0; j < size; j++) {
			int aux; cin >> aux;
			if (aux % 2 == 0)pares++;
		}
		cout << pares << "\n";
	}
	return 0;
}