#include <iostream>
using namespace std;

int main() {
	unsigned int numCasos; cin >> numCasos;
    while (numCasos--) {
        int muros, h1, h2, arriba = 0, abajo = 0;
        cin >> muros >> h1;
        for (int i = 1; i < muros; ++i) {
            cin >> h2;
            if (h1 > h2) ++abajo;
            else if (h1 < h2) ++arriba;
            h1 = h2;
        }
        cout << arriba << " " << abajo << "\n";
    }
	return 0;
}