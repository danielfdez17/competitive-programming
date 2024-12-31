#include <iostream>
using namespace std;
const int MIN = 74;
const int MAX = 79;

int main()
{

    int year, range;
    cin >> year >> range;
    while (year != 0 && range != 0)
    {
        cout << "[" << (MIN * range) + year << " .. " << (MAX * range) + year << "]\n";
        cin >> year >> range;
    }
    return 0;
}