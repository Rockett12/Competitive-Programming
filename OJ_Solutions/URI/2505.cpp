#include <iostream>
#define _ ios::sync_with_stdio(0);
#define mod 1000000LL
using namespace std;

typedef long long int ll;


ll xp(int exp)
{
    ll base = (ll)exp;
    ll ans = 1;
    while(exp)
    {
        if(exp&1)
            ans = ((ans%mod)*(base%mod))%mod;

        base = ((base%mod)*(base%mod))%mod;

        exp>>=1;
    }

    return ans;
}

int main()
{_


    ll n, i;
    while(cin>>n)
    {
        i = xp(n);

        while(n && n%10LL==i%10LL)
        {
            n/=10LL;
            i/=10LL;
        }

        if(!n)
            cout<<"SIM\n";
        else
            cout<<"NAO\n";

    }
}

