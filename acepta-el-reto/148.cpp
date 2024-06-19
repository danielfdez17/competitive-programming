#include<iostream>
using namespace std;

const int HOUR = 23, MINUTES = 59;

int toInteger(char c) {
  if (c == '0') return 0;
  if (c == '1') return 1;
  if (c == '2') return 2;
  if (c == '3') return 3;
  if (c == '4') return 4;
  if (c == '5') return 5;
  if (c == '6') return 6;
  if (c == '7') return 7;
  if (c == '8') return 8;
  if (c == '9') return 9;
  return 0;
}

int main() {
    
    while (true) {
      string hour; cin >> hour;
      if (hour == "00:00") break;
      int hours = (10 * toInteger(hour[0]) + toInteger(hour[1])) * 60,
          minutes = 10 * toInteger(hour[3]) + toInteger(hour[4]);
      cout << HOUR * 60 - hours + MINUTES - minutes + 1 << "\n";
    }

    return 0;
}