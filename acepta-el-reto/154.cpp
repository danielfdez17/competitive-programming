#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int LETRAS = 3;
struct tMatricula {
    int numero;
    string letras;
};

void arreglo(char& a) {
    if ((a == 65) || (a == 69) || (a == 73) || (a == 79) || (a == 85))
        a++;
}


bool casoDePrueba() {
    tMatricula matricula;
    cin >> matricula.numero;
    cin >> matricula.letras;
    if (matricula.numero == 9999 && matricula.letras == "ZZZ")
        return false;
    else {
        if (matricula.numero < 9999)
            matricula.numero++;
        else {
            matricula.numero = 0000;
            for (int i = LETRAS - 1; i > 0; i--) {
                if (matricula.letras[i] < 90) {
                    matricula.letras[i]++;
                    arreglo(matricula.letras[i]);
                    i = 0;
                }
                else if (matricula.letras[i] == 90) {
                    matricula.letras[i] = 66;
                    if (i == 2 && matricula.letras[i - 1] == 90) {
                        matricula.letras[i - 1] = 66;
                        matricula.letras[i - 2]++;
                        arreglo(matricula.letras[i - 2]);
                    }
                    else {
                        matricula.letras[i - 1]++;
                        arreglo(matricula.letras[i - 1]);
                    }
                    i = 0;
                }
            }
        }
        cout << setw(4) << setfill('0') << matricula.numero << " " << matricula.letras << endl;
        return true;
    }
}
int main() {
    while (casoDePrueba()) {
    }
    return 0;
}