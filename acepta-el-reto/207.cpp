// Sombras en el camping 207
#include <iostream>
using namespace std;

const int MAX = 8;
int dr[MAX] = { 1,1,0,-1,-1,-1,0,1 };
int dc[MAX] = { 0,1,1,1,0,-1,-1,-1 };
int main() {
    int c, f, g[50][50];
    while (cin >> c >> f && !(c == 0 && f == 0)) {
        for (int i = 0; i < f; i++)
            for (int j = 0; j < c; j++)
                g[i][j] = 0;
        int a, cnt = 0;
        cin >> a;
        while (a--) {
            int x, y;
            cin >> y >> x;
            x--, y--;
            if (g[x][y] == 1) cnt--;
            g[x][y] = 2;
            for (int d = 0; d < 8; d++) {
                int i = x + dr[d], j = y + dc[d];
                if (0 <= i && i < f && 0 <= j && j < c && g[i][j] == 0) {
                    g[i][j] = 1;
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}