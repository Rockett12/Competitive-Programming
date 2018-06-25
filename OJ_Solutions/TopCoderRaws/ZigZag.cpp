#include <cstdio>
#include <algorithm>
#include <vector>
#define MAXN 123
using namespace std;
int dp[MAXN], alt[MAXN], v[MAXN];
int main()
{
    int n , m;
    scanf("%d", &n);
    for(int i = 0;i<n; ++i)
        scanf("%d", v+i);

    for(int i = 1; i<n; ++i)
        alt[i] = v[i]-v[i-1];

    int major = 0;
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i<n; ++i)
    {
        dp[i] = 1;
        for(int j = 1; j<i; ++j)
        {
            if(alt[i]*alt[j]<0)
                dp[i] = max(dp[i], dp[j]+1);

        }
        if(dp[i]>major)
            major = dp[i];
    }
    if(n <= 2) major = n -1;
    printf("%d\n", major+1);

}

