#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
 int tc; cin >> tc;
while (tc--) {
    int N,K;
    cin >> N >> K;
    string bs;
    cin >> bs;
   string cn;
   if(bs[0]=='0' && K>=1){
    bs[0]='1';
    K--;
   }

   while(K>0){
    cn.push_back('0');
    K--;
   }
   
   
    string ans=bs.append(cn);
    cout << ans << endl;

 }
}