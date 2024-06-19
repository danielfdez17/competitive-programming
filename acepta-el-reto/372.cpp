// La farsante de Mary Poppins 372
#include <string.h>
#include <ctype.h>
#include <iostream>
using namespace std;

void casoDePrueba() {
	char palabra[41];
	int i;
	cin >> palabra;
	for (i = strlen(palabra) - 1; i > -1; i--) {
		if (i == strlen(palabra) - 1) {
			if (palabra[0] == toupper(palabra[0]))
				cout << char(toupper(palabra[i]));
			else
				cout << palabra[i];;
		}
		else
			cout << char(tolower(palabra[i]));
	}
	cout << endl;
}
int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; ++i)
		casoDePrueba();
	return 0;
}