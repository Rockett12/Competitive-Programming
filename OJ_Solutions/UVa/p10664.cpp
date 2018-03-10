#include <cstdio>
#include <algorithm>
#define MAXN 25
#define MAXM 205

using namespace std;
int w[MAXN], dp[MAXM];
int main()
{
    int  t, soma, i=0;
    char x;
    scanf("%d", &t);
    dp[0]=1;
    while(t--)
    {
        soma = 0;

        for(int j = 1; j<=i; ++j)
            dp[j]=0;

        i=0;
        while(scanf("%d%c", w+(++i), &x)!=EOF&&x!='\n')
            soma+=w[i];
        soma+=w[i];

        if(soma&1)
        {
            puts("NO");
            continue;
        }

        for(int j = 1; j<=i; ++j)
            for(int k = soma; k>=w[j]; --k)
                dp[k] = dp[k-w[j]];

        if(dp[soma>>1])
            puts("YES");
        else
            puts("NO");


    }
}

