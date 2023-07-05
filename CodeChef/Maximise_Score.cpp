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
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ansv;
        ansv.push_back(abs(a[0] - a[1]));
          ansv.push_back(abs(a[n-1] - a[n-2]));
        for (int i = 1; i < n - 1; i++)
        {
            int ans = max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            ansv.push_back(ans);
        }
        sort(ansv.begin(), ansv.end());
        cout << ansv.front() << endl;
    }
}