#include <iostream>
using namespace std;

void casoDePrueba() {
  int hh_L, mm_L, ss_L, ss_restantes;
  char simbolo;
  long long int tiempoT_segs, veces, dd_T, hh_T, mm_T, ss_T;
  cin >> veces >> hh_L >> simbolo >> mm_L >> simbolo >> ss_L;
  tiempoT_segs = veces * ((hh_L * 3600) + (mm_L * 60) + ss_L);
  dd_T = tiempoT_segs / 86400;
  ss_restantes = tiempoT_segs % 86400;
  hh_T = ss_restantes / 3600;
  ss_restantes = ss_restantes % 3600;
  mm_T = ss_restantes / 60;
  ss_T = ss_restantes % 60;
  cout << dd_T << " " << hh_T / 10 << hh_T % 10 << ":" << mm_T / 10 << mm_T % 10 << ":" << ss_T / 10 << ss_T % 10 << endl;
}

int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		casoDePrueba();
	}
	return 0;
}