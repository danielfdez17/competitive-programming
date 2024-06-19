#include<iostream>
using namespace std;

const int TIEMPO_COCCION = 10;

int main() {
	int h, c; cin >> h >> c;
	while (h != 0 && c != 0) {
		int tiempo = 1;
		while (h > c) {
			tiempo++;
			h -= c;
		}
		cout << tiempo * TIEMPO_COCCION << "\n";
		cin >> h >> c;
	}
	return 0;
}