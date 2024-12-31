#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int aux, tmp, maxSum = 0;
        cin >> aux;
        maxSum = max(maxSum, n + aux);
        while (aux != 0)
        {
            tmp = aux;
            cin >> aux;
            maxSum = max(maxSum, tmp + aux);
        }
        cout << maxSum << "\n";
        cin >> n;
    }
    return 0;
}