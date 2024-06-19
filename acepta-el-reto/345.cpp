// Sudokus correctos 345
#include <iostream>
using namespace std;

const int MAX = 9;
typedef int tSudoku[MAX][MAX];
bool fila(tSudoku& sudoku);
bool columna(tSudoku& sudoku);
bool region(tSudoku& sudoku);
void casoDePrueba() {
	tSudoku sudoku;
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			cin >> sudoku[i][j];
	if (fila(sudoku) && columna(sudoku) && region(sudoku))
		cout << "SI" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (i = 0; i < numCasos; ++i)
		casoDePrueba();
	return 0;
}

bool fila(tSudoku& sudoku) {
	bool ok = true;
	for (int i = 0; i < MAX && ok; i++) {
		int k = 0;
		for (int j = 0; j < MAX - 1 && ok; j++)
			for (int k = j + 1; k < MAX; k++)
				if (sudoku[i][j] == sudoku[i][k])
					ok = false;
	}
	return ok;
}

bool columna(tSudoku& sudoku) {
	bool ok = true;
	for (int i = 0; i < MAX && ok; i++) {
		int k = 0;
		for (int j = 0; j < MAX - 1 && ok; j++)
			for (int k = j + 1; k < MAX; k++)
				if (sudoku[j][i] == sudoku[k][i])
					ok = false;
	}
	return ok;
}

bool region(tSudoku& sudoku) {
	bool ok = true;
	int cont_reg = 0, columna_reg = 0, fila_reg = 0, total = 0, i = 0, j = 0;
	while ((cont_reg < 9) && ok) {
		i = 0;
		j = 0;
		total = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
				total += sudoku[i + fila_reg][j + columna_reg];
			if (i < 2)
				j = 0;
		}
		if (total != 45)
			ok = false;
		cont_reg++;
		if ((i == 3) && (j == 3) && (columna_reg < 2))
			columna_reg += 3;

		else if ((i == 3) && (j == 3) && (columna_reg == 2) && (cont_reg < 8))
			fila_reg += 3;
	}
	return ok;
}