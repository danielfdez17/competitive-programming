#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

bool excursionApta(const vector<int>& v, int d) {
    bool apta = true;
    int i = 0, inicio = v[0];
    while ((i < v.size() - 1) && apta) {
        if (v[i] < v[i + 1]) {
            apta = ((v[i + 1] - inicio) <= d);
        }
        else if (v[i] == v[i + 1]) {

            inicio = v[i + 1];
        }
        else { 
            apta = ((v[i] - inicio) <= d);
            if (apta) {
                inicio = v[i + 1];
            }
        }

        i++;
    }
    return apta;
}

bool resuelveCaso() {
    int size, d, temp;
    vector<int> vals;
    cin >> d >> size;

    if (!cin)
        return false;

    for (int i = 0; i < size; i++) {
        cin >> temp;
        vals.push_back(temp);
    }

    if (excursionApta(vals, d)) {
        cout << "APTA\n";
    }
    else {
        cout << "NO APTA\n";
    }
    return true;

}


int main() {
    while (resuelveCaso());
    return 0;
}