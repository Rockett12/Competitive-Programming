#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#define MAXN 112345
#define F first
#define S second
#define INF 0x3f3f3f3f
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
const int mod = 1000000007;
int dp[2][MAXN];
int main() {
    int n , m ,a,b,c,d, t, p;
    scanf("%d %d %d", &n, &a, &b);
    for(int i = a; i<=b; ++i)
        dp[1][i] = 1;
    for(int i = 2; i<=n; ++i) {
        for(int j = a; j<=b; ++j) {
            p = dp[~i&1][j-1]+dp[~i&1][j+1];
            if(p>=mod) p-=mod;
            dp[i&1][j] = p;
        }
    }
    int ans = 0;
    for(int i = a; i<=b; ++i) {
        ans += dp[n&1][i];
        if(ans>=mod) ans-=mod;
    }
    printf("%d\n", ans);

}

