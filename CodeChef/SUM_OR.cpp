#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%mod;
        x=(x*x)%mod;
        y=y>>1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll cnt=0;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ll a=n/i;
                for(ll j=1;j*j<=a;j++)
                {
                    if(a%j==0)
                    {
                        ll c=a/j;
                        cnt=(cnt+power(2,c-1))%mod;
                        if(j*j!=a)
                            cnt=(cnt+power(2,j-1))%mod;
                    }
                }
                if(i*i!=n)
                {
                    for(ll j=1;j*j<=i;j++)
                    {
                        if(i%j==0)
                        {
                            ll c=i/j;
                            cnt=(cnt+power(2,c-1))%mod;
                            if(j*j!=i)
                                cnt=(cnt+power(2,j-1))%mod;
                        }
                    }
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
