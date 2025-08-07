#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int main()
{
    fastIO;

    string s, t;
    cin >> s >> t;

    map<char, int> mS, mT;
    for (char x : t)
    {
        mT[x]++;
    }

    int target = mT.size();
    int l = 0, ans = 1e9, count = 0;
    bool check = false;
    int pos = 0;

    for (int r = 0; r < (int)s.length(); r++)
    {
        if (mT[s[r]] == 0)
        {
            continue;
        }

        mS[s[r]]++;
        if (mS[s[r]] == mT[s[r]])
        {
            ++count;
        }
        if (count == target)
        {
            while (mT[s[l]] == 0 || mS[s[l]] - 1 >= mT[s[l]])
            {
                mS[s[l]]--;
                ++l;
            }
            if (ans > r - l + 1)
            {
                ans = r - l + 1;
                pos = l;
            }
            check = true;
        }
    }
    if (!check)
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = pos; i < pos + ans; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}