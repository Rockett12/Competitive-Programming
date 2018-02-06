#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef long long int ll;
ll MOD;
ll xp(ll base, int exp){
    ll ans = 1;
    while(exp)
    {
        if(exp&1)
            ans = ((ans%MOD)*(base%MOD))%MOD;

        base = ((base%MOD)*(base%MOD))%MOD;
        exp>>=1;
    }
    return ans;
}

int main()
{_
    int n;
    ll b;

    while(cin>>b>>n>>MOD)
    {
        b = xp(b, n);
        cout<<b<<endl;
    }
}

