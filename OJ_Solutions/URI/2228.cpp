#include <cstdio>
#include <algorithm>
#define MAXM 11234
#define MAXN 104
using namespace std;
int dp[MAXM], w[MAXN];
int main()
{
    int a, b, n, soma, c, k=0;
    dp[0] = 1;
    while(scanf("%d %d %d", &a, &b, &n)&&n)
    {
        soma = a+b;
        for(int i = 1; i<=n; ++i)
            scanf("%d", w+i), soma+=w[i];

        if(soma&1)
        {
            printf("Teste %d\nN\n\n", ++k);
            continue;
        }

        soma>>=1;
        for(int i = 1; i<=soma; ++i)
            dp[i]=0;

        for(int i = 1; i<=n; ++i)
            for(int j = soma; j>=w[i]; --j)
                dp[j] = max(dp[j], dp[j-w[i]]);

        if(dp[soma-a])
            a = 1;
        else
            a = 0;

        printf("Teste %d\n%c\n\n", ++k, a?'S':'N');

    }
}

