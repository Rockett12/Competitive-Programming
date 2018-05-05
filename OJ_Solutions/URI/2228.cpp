#include <cstdio>
#include <algorithm>
#define MAXM 11234
#define MAXN 104
using namespace std;
int dp[MAXM], w[MAXN];
int main()
{
    int a, b, n, soma, c, k =0, TC = 0;
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
        dp[0] = ++TC;

        for(int i = 1; i<=n; ++i)
            for(int j = soma; j>=w[i]; --j)
                if(dp[j-w[i]]==TC)
                    dp[j] = TC;

        if(dp[soma-a]==TC)
            a = 1;
        else
            a = 0;

        printf("Teste %d\n%c\n\n", ++k, a?'S':'N');

    }
}

