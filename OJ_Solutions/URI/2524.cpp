#include <cstdio>
#define MAXN 1123
int v[MAXN], ans, dp[2][MAXN],TC =0, n, a, i, j, k, r, m, aug;


int main()
{
    while(scanf("%d %d", &n ,&m)!=EOF){
        aug = ans = ++TC;
        for(i=0, j=0; i<m; ++i){
            scanf("%d", &a);
            a%=n;
            if(a) v[++j] = a;
            else ans++;
        }
        m = j, dp[0][0] = TC;
        for(i=1; i<=m; ++i){
            r = i&1;
            for(j = n+v[i]; j>n; --j){
                k = j-v[i];
                if((a = dp[~i&1][k])>= TC ){
                    if(a>dp[r][k])
                        dp[r][k] = a;
                    if(++a>dp[r][j-n])
                        if((dp[r][j-n] = a)>aug)
                            aug = a;
                }

            }
            for(j = n; j>=v[i]; --j){
                k = j-v[i];
                if((a = dp[~i&1][k])>= TC ){
                    if(a>dp[r][k])
                        dp[r][k] = a;
                    if(++a>dp[r][j])
                        if((dp[r][j] = a)>aug)
                            aug = a;
                }
            }
        }
        m&=1;
        ans+=dp[m][0]>dp[m][n] ? dp[m][0] : dp[m][n];
        printf("%d\n", ans-(TC<<1));
        TC = aug;
    }
}
