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
        int a = 1000000;
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        else if (x <= a)
        {
            cout << 1 << " " << 1 << " " << x - 1 << endl;
        }
        else if (x % a != 0)
        {

            cout << x / a << " " << a << " " << x % a << endl;
        }
        else
        {
            cout << x / a - 1 << " " << a << " " << a << endl;
        }
    }
}