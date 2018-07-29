#include <cstdio>
#define MAXN 112
using namespace std;
int dp[2][MAXN][MAXN][MAXN], dx[4], v[112];
int main()
{
    int i,n, k, x,y,z, cur, prox, ans;
    scanf("%d %d", &n, &k);
    for(i = 1; i<=n; ++i)
        scanf("%d", v+i);

    for(i = 1; i<=k; ++i)
        scanf("%d", dx+i);

    dp[1][0][0][0] = 1;
    for(i = 1; i<=n; ++i){
        cur = i&1, prox = ~i&1;
        for(x = 0; x<=dx[1]; ++x){
            for(y = 0; y<=dx[2]; ++y){
                for(z = 0; z<=dx[3]; ++z){
                    dp[prox][x][y][z] |= dp[cur][x][y][z];
                    if(dp[cur][x][y][z]){
                        dp[prox][x+v[i]][y][z] = 1,
                        dp[prox][x][y+v[i]][z] = 1,
                        dp[prox][x][y][z+v[i]] = 1;
                    }
                }
            }
        }
    }
    ans = 0;
    for(x = 0; x<=dx[1]; ++x){
        for(y = 0; y<=dx[2]; ++y){
            for(z = 0; z<=dx[3]; ++z){
                if(dp[~n&1][x][y][z])
                    if((i = x+y+z)>ans)
                        ans = i;
            }
        }
    }
    printf("%d\n", ans);
}
