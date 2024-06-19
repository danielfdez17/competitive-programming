// Sudokus vacíos 196
#include <iostream>
using namespace std;

const int DIM = 9;
typedef char tMatriz[DIM][DIM];
tMatriz matriz;
void casoDePrueba() {
	int digitos = 32, a = 0, cont = 0;
	bool simetria = true;
	//Leer la matriz
	for (int i = 0; i < DIM; i++)
		for (int j = 0; j < DIM; j++) {
			cin >> matriz[i][j];
			if (matriz[i][j] != '-')
				cont++;
		}
	//Simetria de la matriz
	while (simetria && (a < DIM)) {
		int b = 0;
		while (simetria && (b < DIM)) {
			if ((matriz[a][b] != '-') && (matriz[8 - a][8 - b] == '-'))
				simetria = false;
			b++;
		}
		a++;
	}
	//Condicion de matriz simetrica o no simetrica
	if ((cont > digitos) || (!simetria))
		cout << "NO" << endl;
	else
		cout << "SI" << endl;
}
int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; i++)
		casoDePrueba();
	return 0;
}