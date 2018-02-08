#include <iostream>
#define mod 10LL
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef long long int ll;

ll xp(ll base, ll exp)
{
    ll ans = 1;
    while(exp)
    {
        if(exp&1LL)
            ans = ((ans%mod)*(base%mod))%mod;
        base = ((base%mod)*(base%mod))%mod;
        exp>>=1LL;
    }
    return ans;
}


int main()
{_
    int n;
    ll b,e;
    cin>>n;
    while(n--)
    {
        cin>>b>>e;
        b = xp(b, e);
        cout<<b<<endl;
    }
}
