#include <iostream>
using namespace std;

int n, k, s;
int x[11];
int cnt = 0;
int sum = 0;

void backTrack(int i)
{
    for (int j = 1; j <= n; j++)
    {
        x[i] = j;
        if (i == k)
        {
            for (int u = 1; u <= k; u++)
            {
                sum += x[u];
            }
            if (sum == s)
            {
                ++cnt;
            }
            sum -= x[i];
        }
        else
        {
            backTrack(i + 1);
            sum -= x[i + 1];
        }
    }
}

int main()
{
    cin >> n >> k >> s;
    backTrack(1);
    cout << cnt;
    return 0;
}