// Campo de minas 176
#include <iostream>
using namespace std;

const int MAX = 1000;
bool casoDePrueba() {
    char campo[MAX][MAX];
    int anchoTab, altoTab, cont_minas = 0, cont_total = 0;
    cin >> anchoTab >> altoTab;
    if ((anchoTab == 0) || (altoTab == 0))
        return false;
    else {
        for (int altura = 0; altura < altoTab; altura++)
            for (int anchura = 0; anchura < anchoTab; anchura++)
                cin >> campo[altura][anchura];
        for (int altura = 1; altura < altoTab - 1; altura++)
            for (int anchura = 1; anchura < anchoTab - 1; anchura++)
                if (campo[altura][anchura] == '-') {
                    cont_minas = 0;
                    for (int alto = altura - 1; (alto < altura + 2) && (cont_minas < 6); alto++)
                        for (int ancho = anchura - 1; (ancho < anchura + 2) && (cont_minas < 6); ancho++)
                            if (campo[alto][ancho] == '*')
                                cont_minas++;
                    if (cont_minas > 5)
                        cont_total++;
                }
        cout << cont_total++ << endl;
        return true;
    }
}
int main() {
    while (casoDePrueba()) {
    }
    return 0;
}