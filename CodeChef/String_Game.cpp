#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool z_t = true;
        while (s.size() >= 2)
        {
            bool gotIt = false;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    s.erase(i, 2);
                    gotIt = true;
                    break;
                }
            }
            if (!gotIt)
            {
                break;
            }
            z_t = !z_t;
        }
        if (z_t)
        {
            cout << "Ramos\n";
        }
        else
        {
            cout << "Zlatan\n";
        }
    }
}