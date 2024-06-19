#include<iostream>
using namespace std;

int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int cases; cin >> cases;
    while (cases--) {
        int day, month; cin >> day >> month;
        int days = daysPerMonth[month - 1] - day;
        for (int i = month; i < 12; ++i) {
          days += daysPerMonth[i];
        }
        cout << days << "\n";
    }
    return 0;
}