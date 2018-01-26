#include <iostream>
#include <algorithm>
#include <cmath>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef long long int ll;

ll bbin(ll x)
{
    ll ini = 1, fim = 2000000000, resp=0, inter;
    ll mid;
    while(ini<=fim)
    {

        mid = (fim+ini)>>1LL;
        if( ((mid*(mid+1))>>1LL)<= x)
           resp = mid, ini = mid+1;
        else
            fim = mid-1;
    }

    return resp;
}

int main()
{_
    int n;
    ll a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        a = bbin(a);
        cout<<a<<endl;
    }
}

