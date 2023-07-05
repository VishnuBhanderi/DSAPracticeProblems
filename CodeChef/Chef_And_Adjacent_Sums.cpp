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
    cin >> N;
    int e;
    vector<int> a;
    for(int i=0 ; i<N ; i++)
    {
        cin>>e;
        a.push_back(e);
    }
    vector<int> b;
    for(int i=0 ; i<N ; i++)
    {
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    int z = b[N-1]+ b[N-2];
    bool isNo = true;
    for(int i = 0 ; i<N-1; i++){
        if(a[i]+a[i+1]<z){
            isNo = false;
        }
    }
    if(isNo){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

 }
}