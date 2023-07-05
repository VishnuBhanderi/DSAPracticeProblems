#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
 int tc; cin >> tc;
while (tc--) {
        int n;
        cin >> n;
        int temp = 0;
        int ans = 0;
        temp = n%10;
        if(temp>=5){
            ans = 100 - n + temp - 10;
        }
        else{
            ans = 100 - n + temp;
        }
        cout << ans << endl;
 }
}