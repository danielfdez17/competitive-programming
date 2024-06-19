#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    while (n != 0) {
        string mesa;
        cin >> mesa;
        int i = 0;
        bool D = false, I = false;
        while (i < n && !(D && I)) {
            if (mesa[i] == 'I') 
                I = true;
            else if (mesa[i] == 'D')
                D = true;
            ++i;
        }
        cout << (I && D ? "ALGUNO NO COME\n" : "TODOS COMEN\n");
        cin >> n;
    }
    return 0;
}