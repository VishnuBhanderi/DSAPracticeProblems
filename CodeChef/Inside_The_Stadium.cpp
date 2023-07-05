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
        vector<int> run;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            run.push_back(ele);
        }
        for (int i = 1; i <= n; i++)
        {
            sum = sum + run[i-1];
           if (sum==i){
            count++;
           }
        }
     
        cout << count << endl;
    }
}