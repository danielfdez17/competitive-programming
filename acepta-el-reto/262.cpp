#include <iostream>
using namespace std;

bool casoDePrueba() {
    const int MOD = 46337;
    int n, p;
    cin >> n >> p;
    if ((n == 0) && (p == 0))
        return false;
    else {
        int suma = 0, num_iesimo;
        for (int i = 1; i <= n; i++) {
            num_iesimo = 1;
            for (int j = 0; j < p; j++) {
                num_iesimo = (num_iesimo % MOD) * (i % MOD);
            }
            suma = suma + (num_iesimo % MOD);
        }
        cout << suma % MOD << endl;
        return true;
    }

}
int main() {
    while (casoDePrueba()) {
    }
    return 0;
}