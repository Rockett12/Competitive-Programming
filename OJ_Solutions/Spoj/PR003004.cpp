#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
ll dp[20][2][200], TC=0, stmp[20][2][200];
vi dig;
vi disc(ll x)
{
    vi digi;
    while(x)
    {
        digi.pb(x%10LL);
        x/=10LL;
    }
    return digi;
}

ll solve(int id, int res, int sum)
{
    if(id== -1)
        return sum;
    if(stmp[id][res][sum]==TC)
        return dp[id][res][sum];

    ll ans = 0LL;
    int stop = res?dig[id]:9;

    for(int i =0; i<=stop; ++i)
        ans+=solve(id-1, (i<dig[id]?0:res), sum+i);

    stmp[id][res][sum] = TC;
    return dp[id][res][sum] = ans;
}

ll process(ll x)
{
    dig = disc(x);
    ++TC;
    return solve((int)dig.size()-1, 1, 0);
}

int main()
{
    int n;
    ll a,b;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n",process(b) - process(a-1));
    }
}

