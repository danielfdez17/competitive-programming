#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    int casos; cin >> casos;
    while (casos--) {
        string apellido = "", nombre, aux, anterior = "";
        cin >> aux; 
        int cont = 0, hermanos = 0;
        while (aux != "====") {
            cin >> nombre;
            for (char c : aux) {
                if (c != ',') 
                    apellido.push_back(tolower(c));
            }
            if (cont != 0) {
                if (apellido == anterior) 
                    hermanos += 2;
            }
            ++cont;
            anterior = apellido;
            apellido = "";
            cin >> aux;
        }
        cout << cont << " " << hermanos << "\n";
    }

    return 0;
}