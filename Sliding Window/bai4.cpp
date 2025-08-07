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

    int l = 0;
    map<char, int> mS, mT;
    for (char x : s)
    {
        mS[x] = 1;
    }

    int ans = s.length();
    for (int r = 0; r < (int)s.length(); r++)
    {
        mT[s[r]]++;
        while (mT.size() == mS.size())
        {
            if (mT[s[l]] == 1)
            {
                ans = min(ans, r - l + 1);
                break;
            }
            else if (mT[s[l]] > 1)
            {
                mT[s[l]]--;
                ++l;
            }
        }
    }
    cout << ans << endl;
    return 0;
}