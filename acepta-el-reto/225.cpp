#include<iostream>
#include<cstring>
using namespace std;

#define MOD 1000000007
#define MAX 100000

int dp[MAX + 1];
int bonacci(int n, int x, int y) {
    if (dp[n] != -1)
        return dp[n];
    if (n == 0) {
        if (dp[n] != -1)
            return dp[n] += x;
        return dp[n] = x;
    }
    if (n == 1)  {
        if (dp[n] != -1)
            return dp[n] += y;
        return dp[n] = y;
    }
    return dp[n] = bonacci(n - 1, x, y) + bonacci(n - 2, x, y);
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    while (!cin) {
        memset(dp, -1, MAX * sizeof(int));
        cout << bonacci(n, x, y) % MOD << "\n";
        cin >> n >> x >> y;
    }
	return 0;
}