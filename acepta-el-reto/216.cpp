#include <iostream>
#include <iomanip>
using namespace std;

void casoDePrueba() {
   int gotas, HH, MM, SS;
   cin >> gotas;
   HH = (gotas / 3600);
   MM = ((gotas % 3600) / 60);
   SS = ((gotas % 3600) % 60);
   cout << setfill('0') << setw(2) << HH << ":" << setfill('0') << setw(2) << MM << ":" << setfill('0') << setw(2) << SS << endl;
}

int main() {
   unsigned int numCasos, i;
   cin >> numCasos;
   for (int i = 0; i < numCasos; i++) {
      casoDePrueba();
   }
   return 0;
}