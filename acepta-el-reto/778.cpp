#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int tmp, desordenados = 0;
        cin >> tmp;
        for (int i = 1; i < n; ++i)
        {
            int a;
            cin >> a;
            if (tmp > a)
                desordenados += 2;
            tmp = a;
        }
        cout << n - desordenados << "\n";
        cin >> n;
    }
    return 0;
}