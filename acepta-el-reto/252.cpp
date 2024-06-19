#include<iostream>
#include<string>
using namespace std;

bool palindroma(string cad, int c, int f) {
	if (c >= f) return true;
	while (cad[c] == ' ') c++;
	while (cad[f] == ' ') f--;
	if (tolower(cad[c]) != tolower(cad[f])) return false;
	return palindroma(cad, c + 1, f - 1);
}

bool resuelveCaso() {
	string cad; getline(cin, cad);
	if (cad == "XXX") return false;
	cout << (palindroma(cad, 0, cad.length() - 1) ? "SI\n" : "NO\n");
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}