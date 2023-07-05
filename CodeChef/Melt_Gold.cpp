#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
 int tc; cin >> tc;
while (tc--) {
  int X,Y;
  cin >> X >> Y ;
  int dif = X-Y;
  int min = 1;
  while (((min*(min+1))/2)<dif){
   min++;
  }
  cout << min << endl;
 }
}