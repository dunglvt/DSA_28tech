#include <iostream>
using namespace std;

int n, m;
int a[55][55];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void loang(int x, int y)
{
    a[x][y] = 0;
    for (int i = 0; i < 8; i++)
    {
        int dx_tmp = x + dx[i];
        int dy_tmp = y + dy[i];
        if (dx_tmp >= 0 && dy_tmp >= 0 && dx_tmp < n && dy_tmp < m && a[dy_tmp][dy_tmp] == 1)
        {
            loang(dx_tmp, dy_tmp);
        }
    }
    return;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][i] == 1)
            {
                ++count;
                loang(i, j);
            }
        }
    }
    cout << count;
    return 0;
}