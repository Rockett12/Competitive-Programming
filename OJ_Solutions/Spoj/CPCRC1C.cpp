#include <cstdio>
#include <vector>
#define pb push_back
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
ll dp[20][2][200], TC=0, stmp[20][2][200];
vi dig;
vi get(ll x)
{
    vi digit;
    while(x)
    {
        digit.pb(x%10);
        x/=10;
    }

    return digit;
}

ll solve(int ind, int res, int sum)
{
    if(ind==-1)
        return sum;
    if(stmp[ind][res][sum]==TC)
        return dp[ind][res][sum];

    ll ans = 0;
    int stop = res?dig[ind]:9;

    for(int i = 0; i<=stop; ++i)
        ans+=solve(ind-1, i<stop?0:res, sum+i);

    stmp[ind][res][sum] = TC;

    return dp[ind][res][sum] = ans;

}

ll process(int x)
{
    dig = get(x);
    ++TC;
    return solve((int)dig.size()-1, 1, 0);
}

int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m)&&(n!=-1))
        printf("%lld\n", process(m)-process(n-1));
}
