
#include <iostream>
#include <cstdio>
#define _ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;

ll MOD;
ll bexp(ll base, int exp)
{
    ll ans = 1;
    while(exp)
    {
        if(exp&1)
            ans = ((ans%MOD)*(base%MOD))%MOD;

        base =((base%MOD)*(base%MOD))%MOD;

        exp>>=1;
    }

    return ans;
}

int main()
{
    ll x, y;
    int t, n;

    cin>>t;
    while(t--)
    {
        cin>>x>>n>>MOD;

        y = bexp(x, n);

        cout<<y<<endl;
    }
    cin>>n;
}

