#include <cstdio>
#include <algorithm>
#define MAXM 55
#define MAXN 105

using namespace std;
int v[MAXN], w[MAXN], dp[2][MAXM], brinq[2][MAXM], npac[2][MAXM];
int main()
{
    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(int i =1; i<=n; ++i)
            scanf("%d %d", v+i, w+i);

        for(int i =1; i<=50; ++i)
            dp[0][i]= npac[0][i] = brinq[0][i] = 0;

        for(int i = 1; i<=n; ++i)
        {
            for(int j = 1; j<=50; ++j)
            {
                if( j>=w[i] && dp[~i&1][j-w[i]] + v[i] > dp[~i&1][j])
                {
                    dp[i&1][j] = dp[~i&1][j-w[i]] + v[i];
                    brinq[i&1][j] = brinq[~i&1][j-w[i]] + w[i];
                    npac[i&1][j] = npac[~i&1][j-w[i]] +1;
                }
                else
                {
                    dp[i&1][j] = dp[~i&1][j];
                    brinq[i&1][j] = brinq[~i&1][j];
                    npac[i&1][j] = npac[~i&1][j];
                }
            }
        }

        printf("%d brinquedos\nPeso: %d kg\nsobra(m) %d pacote(s)\n\n", dp[n&1][50], brinq[n&1][50], n-npac[n&1][50]);
    }
}
