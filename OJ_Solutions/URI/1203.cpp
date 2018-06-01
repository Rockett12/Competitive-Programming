#include <cstdio>
#define MAXN 112
#define MAXM 5123

int w[MAXN], dp[MAXM];
int main()
{
    int n, m, u, v, TC=0;
    while(scanf("%d %d", &n,&m)!=EOF)
    {
        ++TC;
        for(int i = m; i--;)
            scanf("%d %d",&u, &v), ++w[u], ++w[v];

        dp[0]=TC;

        for(int i = 1; i<=n; w[i++]=0)
            for(int j = m; j>=w[i]; --j)
                if(dp[j-w[i]]==TC)
                    dp[j]=TC;

        printf("%c\n", dp[m]==TC?'S':'N');
    }
}
