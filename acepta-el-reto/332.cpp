#include <algorithm>
#include <stdio.h>

unsigned short casos;
unsigned int peso[10];
unsigned int peso_supuesto[10];
unsigned int carros[5];

bool verificar() {

    peso_supuesto[0] = carros[4] + carros[3];
    peso_supuesto[1] = carros[4] + carros[2];
    peso_supuesto[2] = carros[4] + carros[1]; 
    peso_supuesto[3] = carros[4] + carros[0]; 
    peso_supuesto[4] = carros[3] + carros[2]; 
    peso_supuesto[5] = carros[3] + carros[1]; 
    peso_supuesto[6] = carros[3] + carros[0]; 
    peso_supuesto[7] = carros[2] + carros[1]; 
    peso_supuesto[8] = carros[2] + carros[0];
    peso_supuesto[9] = carros[1] + carros[0];

    std::sort(peso_supuesto,peso_supuesto + 10);

    for (unsigned short g = 0; g < 10; g++) {

        if (peso_supuesto[g] != peso[g]) {

            return true;

        }
    }

    return false;

}

int main() {

    scanf("%hu", &casos);

    for (unsigned int i = 0; i < casos; i++) {

        for (unsigned short f = 0; f < 10; f++) {

            scanf("%u", &peso[f]);

        }

        carros[2] = (peso[2] + peso[1] - peso[0]) / 2;
        carros[3] = peso[2] - carros[2];
        carros[4] = peso[1] - carros[2];
        carros[0] = peso[8] - carros[2];
        carros[1] = peso[9] - carros[0];

        if(verificar()){

            carros[2] = (peso[3] + peso[1] - peso[0]) / 2;
            carros[3] = peso[3] - carros[2];
            carros[4] = peso[1] - carros[2];
            carros[0] = peso[8] - carros[2];
            carros[1] = peso[9] - carros[0];

        }

        if (verificar()){

            carros[2] = (peso[4] + peso[1] - peso[0]) / 2;
            carros[3] = peso[4] - carros[2];
            carros[4] = peso[1] - carros[2];
            carros[0] = peso[8] - carros[2];
            carros[1] = peso[9] - carros[0];

        }

        printf("%u %u %u %u %u\n", carros[0], carros[1], carros[2], carros[3], carros[4]);

    }
}