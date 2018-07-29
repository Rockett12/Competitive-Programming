#include <cstdio>
#include <algorithm>
#define MAXN 1123
using namespace std;

int v[MAXN], dp[2][MAXN];
int main(){
    int n, k, i, j, ini, m;
    while(scanf("%d", &n)&&n){
        n<<=1;
        for(i = 1; i<=n; ++i){
            scanf("%d", &m);
            v[i] = (~m&1);
            dp[0][i] = (~m&1)|(v[i-1]);
        }

        for(i = 2, k = 1; i<=n; i+=2, ++k){
            for(j = i+2, ini = 1; j<=n; ++j, ++ini){
                m =  dp[~k&1][j-1];
                dp[k&1][j] = max(v[j]+min(dp[~k&1][j-2], m),v[ini]+min(m, dp[~k&1][j]));
            }
        }

        printf("%d\n", dp[k&1][n]);
    }
}

