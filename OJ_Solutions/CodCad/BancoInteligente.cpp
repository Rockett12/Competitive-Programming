#include <cstdio>
#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f
#define F first
#define S second
#define MAXS 5005
#define MAXN 3123
using namespace std;
int dp[MAXN][MAXS], val[] = {2,5,10,20,50,100}, v[MAXN], jump[MAXN];

int main()
{
    dp[0][0] = 1;
    int n = 1, m , s;
    scanf("%d", &s);

    for(int i = 0; i<6; ++i){
        scanf("%d", &m);
        for(int j = n; j<m+n; ++j){
            v[j] = val[i];
            jump[j] = n-1;
            dp[j][0] = 1;
        }
        n+=m;
    }

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=s; ++j)
            dp[i][j] = (j>=v[i]?dp[i-1][j-v[i]]:0) + dp[jump[i]][j];

    printf("%d\n", dp[n][s]);
}
