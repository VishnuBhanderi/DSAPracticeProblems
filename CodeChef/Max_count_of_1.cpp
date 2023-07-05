#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
 int tc; cin >> tc;
while (tc--) {
    int N;
    string bs;
    cin >> N;
    cin >> bs;
    int c1 =0;
    int c2 = 0;
    string X;
    vector<int> v;
    for(int i = 0; i<N; i++){
        v.push_back(bs[i]-'0');
    }
    vector<int> v1;
    vector<int> v2;
    v1.push_back(0);
    v2.push_back(1);
    for (int i = 1; i < N; i++)
    {
        v1.push_back(v[i-1]^v1[i-1]);
        
    }
    for (int i = 1; i < N; i++)
    {
        v2.push_back(v[i-1]^v2[i-1]);
    }
    for (int i = 0; i < N; i++)
    {
        c1 = c1 + v1[i];
        c2 = c2 + v2[i];
    }
    cout << max(c1,c2) << endl;
 }
}