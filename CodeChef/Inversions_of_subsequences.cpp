#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353

int inv[100005];

int power(int a, int b){
    int res=1;
    while(b){
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}

int inverse(int x){
    return power(x, mod-2);
}

void init(){
    inv[1]=1;
    for(int i=2;i<=100000;i++){
        inv[i]=inverse(i);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int p[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            p[a[i]]=i;
        }
        int ans=1;
        int sum=0;
        for(int i=n;i>=1;i--){
            ans=ans*(n-i+1)%mod*inv[i]%mod;
            sum=(sum+p[i])%mod;
            if(sum==(n*(n+1)/2-i*(i-1)/2)%mod){
                ans=(ans+power(2,n-i)-1)%mod;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
