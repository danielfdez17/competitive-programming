#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    while (n != 0) {
        int sumatorio = 0, sumador, suma = 0;
        for (int i = 2; i <= n; ++i) {
            cin >> sumador;
            suma += sumador;
        }
        for (int i = 1; i <= n; ++i) 
            sumatorio += i;
        cout << sumatorio - suma << "\n";
        cin >> n;
    }
	return 0;
}