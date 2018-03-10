#include <cstdio>
#include <algorithm>
#define MAXN 50
#define MAXM 1005
using namespace std;
int dp[MAXM], w[MAXN];

int main()
{
    int n, f, k=0;
    dp[0] = 1;
    w[0] = 0;
    while(scanf("%d", &n)!=EOF)
    {
        f =1;
        for(int i = 1; i<=n; ++i)
            scanf("%d", w+i);


        for(int j = 1; j<=w[n]; ++j)
            dp[j] = 0;

        for(int i = 1; i<=n; ++i)
            for(int j = w[n]; j>=w[i]; --j)
                dp[j] += min(dp[j-w[i]], 1);


        for(int i = 1; i<=n; ++i)
            dp[w[i]]>1?f=0:0;

        printf("Case #%d:", ++k);
        for(int i = 1; i<=n; ++i)
            printf(" %d", w[i]);

        if(f)
            puts("\nThis is an A-sequence.");
        else
            puts("\nThis is not an A-sequence.");
    }

}

