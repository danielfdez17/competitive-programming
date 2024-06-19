#include <iostream>
using namespace std;

bool casoDePrueba() {
	int cNegros = 0, cGrises = 0;
	char color;
	cin >> color;
	if (color == '.')
		return false;
	else {
		while (color != '.') {
			if (color == 'N')
				cNegros++;
			else if (color == 'G')
				cGrises++;
			cin >> color;
		}

		if ((cNegros % 2 == 0) && (cGrises % 2 == 0))
			cout << "EMPAREJADOS" << endl;
		else if ((cNegros % 2 != 0) && (cGrises % 2 != 0))
			cout << "PAREJA MIXTA" << endl;
		else if (cNegros % 2 == 0)
			cout << "GRIS SOLITARIO" << endl;
		else
			cout << "NEGRO SOLITARIO" << endl;
	}
}

int main() {
	while (casoDePrueba()) {
	}
	return 0;
}