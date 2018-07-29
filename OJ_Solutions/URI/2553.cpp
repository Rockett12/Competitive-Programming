#include <cstdio>
#define MAXN 45
#define MAXC 900
using namespace std;
int g[MAXN], y[MAXN], ans, dp[2][MAXC][MAXC],TC =0, last;
int main()
{
    int v, a,maxi,n, maxj, ni, nj;
    while(scanf("%d", &n)!=EOF){
        scanf("%d %d", &v, &a);
        maxi = v, maxj = a, dp[0][v][a] = ans =  ++TC;

        for(int i = 1; i<=n; ++i){
            scanf("%d %d", &v, &a);
            if(v>0) maxi +=v;
            else maxj +=a;
            g[i] = v, y[i] = a;
        }

        for(int k = 1; k<=n; ++k){
            for(int i = 0; i<=maxi; ++i){
                for(int j = 0; j<=maxj; ++j){
                    if((last = dp[~k&1][i][j])>=TC){
                        if(dp[k&1][i][j]<last)
                            dp[k&1][i][j] = last;
                        if((ni = i+g[k])>=0 && (nj = j+y[k])>=0)
                            if(++last > dp[k&1][ni][nj]){
                                dp[k&1][ni][nj] = last;
                                if(last>ans)
                                    ans = last;
                            }

                    }
                }
            }
        }

        printf("%d\n", ans-=TC);
        TC+=ans;
    }
}
