#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
long long a[555][555];
long long f[111][111];
int dx[2] = { -1, 0};
int dy[2] = {0, -1};
int c = 0;
int res = 1;
bool visited[111][111];

void loang(int x, int y)
{
    visited[x][y] = true;
    for (int i = 0; i < 2; i++)
    {
        int t_dx = x + dx[i];
        int t_dy = y + dy[i];
        if (t_dx > 0 && t_dy > 0 && t_dx <= n && t_dy <= m && a[t_dx][t_dy] == 1) {
            ++c;
            if (!visited[t_dy][t_dy]) {
                loang(t_dx, t_dy);
            }
        }
    }
    res *= c;
    visited[n][m] = false;
    return;
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    f[1][1] = a[1][1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] &&  (i != 1 || j != 1)) {
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            }
        }
    }
    cout << f[n][m];
    return 0;
}