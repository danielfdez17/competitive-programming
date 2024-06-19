#include <iostream>
#include <string>
using namespace std;

bool casoDePrueba() {

	string cad1, cad2, numero1, numero2;
	int acarreo = 0, int1 = 0, int2 = 0, resto = 0;

	cin >> cad1;
	cin >> cad2;

	if ((cad1 == "0") && (cad2 == "0"))
		return false;
	else {
		int longitud1 = cad1.size() - 1;
		int longitud2 = cad2.size() - 1;

		while ((longitud1 >= 0) && (longitud2 >= 0) || (resto)) {
			int pos1 = longitud1;
			int pos2 = longitud2;

			if (longitud1 >= 0) {
				numero1 = cad1.at(pos1);
				int1 = stoi(numero1);
			}
			else
				int1 = 0;

			if (longitud2 >= 0) {
				numero2 = cad2.at(pos2);
				int2 = stoi(numero2);
			}
			else
				int2 = 0;

			if (int1 + int2 + resto > 9) {
				resto = 1;
				acarreo++;
			}
			else
				resto = 0;

			longitud1--;
			longitud2--;
		}
		cout << acarreo << endl;
		return true;
	}
}
int main() {
	while (casoDePrueba()) {
	}
	return 0;
}