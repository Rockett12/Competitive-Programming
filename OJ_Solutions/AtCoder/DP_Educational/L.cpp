#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MAXN = 3333;
ll dp[MAXN], v[MAXN];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        scanf("%lld", v+i);
    }

    for (int l = 1; l<=n; ++l) {
        for (int m = (n-l&1), i = n-l+1, j = n; j>=l; --i, --j) {
            if (m) {
                dp[j] = min(dp[j] - v[i], dp[j-1] - v[j]);
            } else {
                dp[j] = max(dp[j] + v[i], dp[j-1] + v[j]);
            }
        }
    }
    printf("%lld\n", dp[n]);
}
