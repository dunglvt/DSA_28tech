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

    string s;
    cin >> s;

    map<char, int> mS, mT;
    for (char x : s)
    {
        mS[x] = 1;
    }

    int l = 0;
    int k = mS.size();
    for (int i = 0; i < (int)mS.size(); i++)
    {
        mT[s[i]]++;
    }

    int ans = 0;
    for (int r = 0; r < (int)s.length(); r++)
    {
        if (mT[s[r]] == 0)
        {
            mT[s[r]]++;
        }
        else
        {
            ans = max(ans, r - l);
            while (mT[s[r]] > 1)
            {
                mT[s[l]]--;
                if (mT[s[l]] == 0)
                {
                    mT.erase(s[l]);
                }
                ++l;
            }
        }
    }
    cout << ans << endl;
    return 0;
}