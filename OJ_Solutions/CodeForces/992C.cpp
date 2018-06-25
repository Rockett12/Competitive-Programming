#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long int ll;
typedef vector<ll> col;
typedef vector<col> matrix;
ll mod = 1000000007LL;

matrix cross(matrix A, matrix B)
{
    matrix C(2, col(2,0));
    for(int i = 0; i<2; ++i){
        for(int j = 0; j<2; ++j)
        {
            for(int k = 0; k<2; ++k)
            {
                C[i][j] = (C[i][j]+((A[i][k]%mod)*(B[k][j]%mod))%mod)%mod;
            }
        }
    }

    return C;
}

matrix mxp(matrix base, ll exp)
{
    matrix ans(2,col(2,0LL));
    ans[0][0] = ans[1][1] = 1LL;
    while(exp)
    {
        if(exp&1LL)
            ans = cross(ans, base);
        base = cross(base,base);
        exp>>=1LL;
    }

    return ans;
}

ll lin(ll n, ll k)
{
    if(k==0)
        return n;

    ll ans = 0;
    col pre(2);
    matrix MT(2,col(2,0)), resp;

    MT[0][0] = 4; MT[0][1] = mod-1;
    MT[1][0] = 0; MT[1][1] = 2;
    pre[0] = n; pre[1] = 1;
    resp = mxp(MT, k);

    for(int i = 0; i<2; ++i)
        ans = (ans+((resp[0][i]%mod)*(pre[i]%mod))%mod)%mod;

    return ans;
}

ll bxp(ll base, ll exp)
{
    ll ans = 1LL;
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
{
    ll n,k, ans, div;
    cin>>n>>k;
    if(!n)
        cout<<0<<endl;
    else
    {
        ans = lin(n,k), div = bxp(2,k);
        div = bxp(div, mod-2);
        ans = (2LL*(ans*div)%mod)%mod;

        cout<<ans<<'\n';
    }
}

