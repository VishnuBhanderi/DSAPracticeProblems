#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
 int tc; cin >> tc;
while (tc--) {
        int N, X;
        cin >> N >> X;
        int arr[N];
        int cnt =0;
        for(int i = 0; i<N; i++){
            cin >> arr[i];
            
        }
         for(int i = 0; i<N; i++){
            if(arr[i]>=X){
                cnt++; 
            }            
        }
        cout << cnt << endl;
 }
}