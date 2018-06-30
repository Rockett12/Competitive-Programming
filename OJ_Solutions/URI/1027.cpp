#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#define MAXN 2123
#define INF 0x3f3f3f3f
#define F first
#define S second

using namespace std;
typedef pair<int,int> ii;
typedef long long int ll;

int dp[2][MAXN];
ii v[MAXN];
int main()
{
    int n , k,x,y, ans;
    while(scanf("%d", &n)!=EOF){

        for(int i = 1; i<=n; ++i)
        {
            scanf("%d %d", &x, &y);
            v[i] = {x,y};

            dp[0][i] = 1;
            dp[1][i] = 1;
        }
        sort(v+1, v+n);
        ans = 1;

        for(int i = 2, k; i<=n; ++i){
            for(int j = 1; j<i; ++j){
                if(v[i].F!=v[j].F){
                    if(abs(k = v[i].S-v[j].S)==2){
                        if(k>0 && dp[1][j]+1>dp[0][i]) dp[0][i] = dp[1][j]+1;
                        else if(k<0 && dp[0][j]+1>dp[1][i]) dp[1][i] = dp[0][j]+1;
                    }
                }
            }

            if(dp[0][i]>ans) ans = dp[0][i];
            if(dp[1][i]>ans) ans = dp[1][i];
        }

        printf("%d\n", ans);
    }
}
