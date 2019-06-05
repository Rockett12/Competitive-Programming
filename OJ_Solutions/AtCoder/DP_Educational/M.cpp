#include <bits/stdc++.h>
using namespace std;
const int MAXN = 112345;
const int mod = 1000000007;
int v[MAXN], dp[MAXN];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i<=n; ++i) {
        scanf("%d", v+i);
    }
    dp[0] = 1; 
    for (int i = 1, j, sum, old; i<=n; ++i) {
        sum = 0;
        for (j = 0; j <= v[i] && k-j>=0; ++j) {
            sum+=dp[k-j];
            if (sum >= mod) sum -= mod;
        }

        for (j = k; j>=0; --j) {
            old = dp[j];
            dp[j] = sum;
            if (dp[j] >= mod) dp[j] -= mod;
            if (j-v[i]-1>=0) sum += dp[j-v[i]-1]; 
            sum -= old;
            if (sum >= mod) sum -= mod;
            if (sum < 0) sum += mod;
        }
    }
    printf("%d\n", dp[k]);
}
