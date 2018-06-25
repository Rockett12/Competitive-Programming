#include <cstdio>
#include <algorithm>
#include <vector>
#define MAXN 1233
using namespace std;
int dp1[MAXN], dp2[MAXN], n;

int main()
{
    int n , m, x;
    scanf("%d", &n);
    for(int i = 1;i<=n; ++i)
    {
        scanf("%d", &x);
        dp1[i] = dp2[i] = x;

    }

    if(n>2) dp1[n] = 0, dp2[1] = 0;
    else dp2[n] = dp2[n-1];
    for(int i = 3; i<=n; ++i)
    {
        dp1[i] = max(dp1[i-1], dp1[i] + max (dp1[i-2], dp1[i-3]));
        dp2[i] = max(dp2[i-1], dp2[i] + max (dp2[i-2], dp2[i-3]));
    }


    printf("%d\n", max(dp1[n], dp2[n]));
}

