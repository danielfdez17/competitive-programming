#include <iostream>
#include <iomanip>
using namespace std;

bool casoDePrueba() {
    unsigned int dias, emisoras;
    int dd, hh, mm, ss,ss_restantes;
    char simbolo;
    long long int tiempoT_segundos;
    cin >> dias >> emisoras;
    if (dias == 0 && emisoras == 0) {
        return false;
    } 
    else {
        tiempoT_segundos = dias * emisoras * 6 * 24;
        dd = tiempoT_segundos / 86400;
        ss_restantes = tiempoT_segundos % 86400;
        hh = ss_restantes / 3600;
        ss_restantes = ss_restantes % 3600;
        mm = ss_restantes / 60;
        ss = ss_restantes % 60;
        cout << dd << ":" << hh / 10 << hh % 10 << ":" << mm / 10 << mm % 10 << ":" << ss / 10 << ss % 10 << endl;
    }

} 
int main() {
    while (casoDePrueba()) {
    }
    return 0;
}