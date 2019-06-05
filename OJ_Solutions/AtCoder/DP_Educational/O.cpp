#include <bits/stdc++.h>
using namespace std;
const int MAXN = (1<<21)+1;
const int mod = 1000000007;
int dp[MAXN];
int adj[33],n ;
int main() {
    int  m, k;
    scanf("%d", &n);
    for (int i = 0; i<n; ++i) {
        for (int j = 0, x; j<n; ++j) {
            scanf("%d", &x);
            adj[i] = adj[i]<<1|x;
        }
    }
    dp[(1<<n)-1] = 1;
    for (int i = n-1; i>=0;--i) {
        for (int mask = 0, g, x; mask<1<<n; ++mask) {
            g = ~mask&adj[i]; 
            while (g) {
                x = g&-g;
                dp[mask] += dp[mask|x];
                if (dp[mask] >= mod) dp[mask] -= mod;
                g -= x;
            }
        }
    }
    printf("%d\n", dp[0]); 
}
