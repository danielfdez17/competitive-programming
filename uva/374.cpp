#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool resuelveCaso() {
    long long b, p, m; cin >> b >> p >> m;
    if (!cin) return false;
    long long res = 1;
    b %= m;
    while (p > 0) {
        if (p % 2 == 1) res = ((res % m) * (b % m)) % m;
        p = p >> 1;
        b = ((b % m) * (b % m)) % m;
    }
    // int i = 1;
    // int res = b;
    // while (i <= p) {
    //     res = ((res % m) * (b % m)) % m;
    //     i++;
    // }
    cout << res << "\n";
    return true;    
}

int main() {    
    while (resuelveCaso());
    return 0;
}