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
    if(n<3){
        cout << 0 << endl;
    }
    else{
        if(n==3){
            cout << 2 << endl;
        }
        else{
            int ans = 2;
            if((n-3)%2==0){
                ans = ans + (3*((n-3)/2));
            }
            else {
                ans = ans + (3*((n-3)/2)) +1;
            }
            cout << ans << endl;
        }
    }

 }
}