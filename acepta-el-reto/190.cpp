#include <iostream>
using namespace std;

bool casoDePrueba() {
    long long int num, den, a;
    cin >> num >> den;
    if (num < den)
        return false;
    else {
        a = 1;
        for (int i = num; i > den; i--)
            a = a * i;
        cout << a << endl;
        return true;
    }
}

int main() {
    while (casoDePrueba()) {
    }
    return 0;
}