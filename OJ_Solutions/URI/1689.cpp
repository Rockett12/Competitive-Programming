#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#define MAXN 1000001
using namespace std;
int dp[MAXN], v[MAXN], pos[MAXN], cur[MAXN];
int main()
{
    int n, k, t, TC=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        ++TC;
        for(int i = 1, x; i<=n; ++i){
            scanf("%d", &x);
            pos[i] = x;
        }

        for(int i = 1, x, p; i<=n; ++i){
            scanf("%d", &x);
            p = pos[i];
            if(cur[p]==TC){
                if(x>v[p])
                    v[p] = x;
            }
            else
                v[p] = x, cur[p] = TC;
        }

        for(int i = 1; i<k; ++i){
            if(cur[i]==TC && v[i]>dp[i-1])
                dp[i] = v[i];
            else
                dp[i] = dp[i-1];
        }
        n = pos[n];
        for(int i = k; i<=n; ++i){
            if(cur[i]==TC && v[i]+dp[i-k]>dp[i-1])
                dp[i] = v[i]+dp[i-k];
            else
                dp[i] = dp[i-1];
        }

        printf("%d\n", dp[n]);

    }
}
