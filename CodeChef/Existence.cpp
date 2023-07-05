#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
 int tc; cin >> tc;
while (tc--) {
        int x,y;
        cin >> x >> y;
        if(x*x == 2*y){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
 }
}   