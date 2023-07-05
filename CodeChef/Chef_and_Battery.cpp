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
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int median = a[n/2];
        int ans = INT_MAX;
        for(int i= max(0LL, n/2-1); i<=min(n/2+1, n-1); i++) {
            int score = 0;
            for(int j=0; j<n; j++) {
                if(j != i) {
                    score = max(score, abs(a[j]-a[i]));
                }
            }
            ans = min(ans, score);
        }
        cout << ans << endl;
    }
}