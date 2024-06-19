#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;

#define KAPREKAR 6174

bool itsKaprekar(char a, char b, char c, char d) {
    return (a == '6' && b == '1' && c == '7' && d == '4');
}

bool itsKaprekar(int a) {
    return a == KAPREKAR;
}

bool itsRepdig(int a, int b, int c, int d) {
    return ((a == b) && (b == c) && (c == d));
}

int main() {
    int cases;
    scanf("%d", &cases);

    while (cases--) {
        int num;
        scanf("%d", &num);

        int a = num / 1000;
        int b = (num / 100) % 10;
        int c = (num / 10) % 10;
        int d = num % 10;

        if (itsKaprekar(num))
            printf("%d\n", 0);
        else if (itsRepdig(a, b, c, d))
            printf("%d\n", 8);
        else {
            int cont = 0, big, small, result;

            while (!itsKaprekar(result)) {
                vector<int> v = {a, b, c, d};

                sort(v.begin(), v.end());
                small = v.at(0) * 1000 + v.at(1) * 100 + v.at(2) * 10 + v.at(3);
                big = v.at(3) * 1000 + v.at(2) * 100 + v.at(1) * 10 + v.at(0);
                result = big - small;

                a = result / 1000;
                b = (result / 100) % 10;
                c = (result / 10) % 10;
                d = result % 10;

                cont++;
            }
            printf("%d\n", cont);
            result = 0;
        }

    }
    return 0;
}