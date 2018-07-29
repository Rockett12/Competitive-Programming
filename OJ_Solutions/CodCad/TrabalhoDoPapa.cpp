#include <cstdio>
#include <algorithm>
#include <vector>
#define INF 0x3f3f3f3f
#define MAXN 1123
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
int dp[2][MAXN];
vector<ii> v;

int main()
{
    int ans, rp, resp=0, n, p , r;
    scanf("%d", &n);
    for(int i = 0; i<n; ++i)
        scanf("%d %d", &p, &r), v.push_back({r, p});

    sort(v.rbegin(), v.rend());

    for(int i = 2; i<=n; ++i)
        dp[0][i]= -1;

    dp[0][1] = v[0].F-v[0].S;
    dp[0][0] = dp[1][0] = INF;

    for(int i = 1;i<n;++i)
    {
        r = v[i].F-(p = v[i].S);
        for(int j = 1; j<=n; ++j){
            ans = dp[~i&1][j], rp = dp[~i&1][j-1];

            if(rp>=p)
                if(ans<(rp = (rp-=p)<r?rp:r))
                    ans = rp;

            if(ans>=0 && j>resp)
                resp = j;

            dp[i&1][j] = ans;
        }

    }

    printf("%d\n", resp);
}
