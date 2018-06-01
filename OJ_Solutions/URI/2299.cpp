#include <cstdio>
#include <iostream>
#define MAXN 55
#define MAXM 1123
using namespace std;
int w[MAXN],v[MAXN], dp[2][MAXM];
int main()
{
   int n , m,k=0;

   while(scanf("%d %d", &m, &n)&&n)
   {
        for(int i = 1; i<=n; ++i)
            scanf("%d %d", w+i, v+i);

        for(int i =0; i<=m; ++i) dp[0][i]=0;

        for(int i = 1; i<=n; ++i)
            for(int j = 0; j<=m; ++j)
                dp[i&1][j] = max(dp[~i&1][j], j>=w[i] ? v[i] + dp[~i&1][j-w[i]] : 0);

        printf("Teste %d\n%d\n\n", ++k, dp[n&1][m]);
   }
}
