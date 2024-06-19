#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    while (n != 0) {
        int arista, sobras;
        if (n == 1) {
            arista = 1;
            sobras = 0;
        }
        else {
            arista = (-1 + sqrt(1 + (n * 8))) / 2;
            sobras = n - ((arista * (arista + 1)) / 2);
        }
        cout << arista << " " << sobras << "\n";
        cin >> n;
    }
    return 0;
}