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
        int n, q;
        cin >> n;
        vector<int> a;
        vector<int> que;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            a.push_back(ele);
        }
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int ele;
            cin >> ele;
            que.push_back(ele);
        }
        for (int i = 0; i < q; i++)
        {
            map<int, int> satisfy;
            for (int j = 0; j < n; j++)
            {
                int gc = __gcd(que[i], a[j]);
                if (gc > 1)
                {
                    satisfy.insert({a[j], j});
                }
            }
            if (satisfy.empty() == false)
            {
                auto it = satisfy.begin();
                auto ita = a.begin() + it->second;
                a.erase(ita);
                cout << it->first << " ";
            }
            else{
                map<int, int> temp;
               
                for (int i = 0; i < a.size(); i++)
                {
                    temp.insert({a[i], i});
                }
                auto it = temp.begin();
                auto ita = a.begin() + it->second;
                a.erase(ita);
                cout << it->first << " ";
            }
        }
        cout << endl;
    }
}