// Matrices triangulares 160
#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>>m;
int dim;

bool esTriangular() {
    bool superior = true, inferior = true;
    int i = 0;
    while (i < dim && superior) {
        int j = i + 1;
        while (j < dim && superior) {
            if (m[i][j] != 0) superior = false;
            ++j;
        }
        ++i;
    }
    if (!superior) {
        i = 0;
        while (i < dim && inferior) {
            int j = i + 1;
            while (j < dim && inferior) {
                if (m[j][i] != 0) inferior = false;
                ++j;
            }
            ++i;
        }
    }
    return inferior;
}

int main() {
    cin >> dim;
    while (dim != 0) {
        m = vector<vector<int>>(dim, vector<int>(dim));
        for (int i = 0; i < dim; ++i)
            for (int j = 0; j < dim; ++j)
                cin >> m[i][j];
        cout << (esTriangular() ? "SI\n" : "NO\n");
        cin >> dim;
    }
	return 0;
}