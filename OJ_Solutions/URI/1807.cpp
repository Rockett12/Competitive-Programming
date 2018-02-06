#include <iostream>
#define _ ios::sync_with_stdio(0);
#define MOD 2147483647
using namespace std;
typedef long long int ll;

ll xp(int exp)
{
    ll base = 3LL;
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
{_
    int x;
    cin>>x;
    cout<<xp(x)<<endl;
}

