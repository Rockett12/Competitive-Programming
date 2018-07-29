#include <cstdio>
#define MAXN 212
#define MAXR 2123
int dp[2][MAXR], v[MAXN];
int main()
{
    int n, TC = 0, maxr, cur, prev;
    while(scanf("%d", &n)!=EOF)
    {
        dp[1][0] = ++TC;
        maxr = -1;

        for(int i = 1; i<=n;++i)
        {
            scanf("%d", v+i);
            if(v[i]>maxr)
                maxr = v[i];
        }

        for(int i = 1,w; i<=n; ++i, ++TC)
        {
            w = v[i], cur = i&1, prev = cur^1;
            for(int j = 0; j<=maxr; ++j)
                if(dp[cur][j]==TC)
                {
                    if(j+w>maxr)
                        dp[prev][(maxr<<1)-(w+j)] = TC+1;
                    else
                        dp[prev][j+w] = TC+1;

                    if(w>j)
                        dp[prev][w-j] = TC+1;
                    else
                        dp[prev][j-w] = TC+1 ;
                }
        }

        for(int i = ~n&1, j=0; j<= maxr; ++j)
            if(dp[i][j]==TC)
                printf("%d\n", j), j = maxr;
    }
}
