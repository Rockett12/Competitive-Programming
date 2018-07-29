#include <cstdio>
#include <algorithm>
#define mod 1000000007LL
#define MAXN 1123
#define MAXS 11234
using namespace std;
typedef long long int ll;
int v[MAXN];
ll dp[MAXS];

int main()
{
    int c, m, n;
    scanf("%d", &c);
    dp[0] = 1;
    while(c--){
        scanf("%d %d", &m ,&n);

        for(int i = 1; i<=n; ++i)
            scanf("%d", v+i);

        for(int j = 1; j<=m; ++j){
            dp[j] = 0;
            for(int i = 1; i<=n; ++i){
                if(v[i]>=j)
                    dp[j]++;
                else
                    dp[j] += dp[j-v[i]];
            }
            dp[j]%=mod;
        }

        printf("%lld\n", dp[m]);
    }
}

