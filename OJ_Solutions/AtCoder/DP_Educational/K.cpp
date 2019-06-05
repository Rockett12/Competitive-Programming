#include <bits/stdc++.h>
using namespace std;
const int MAXN = 112345;
bool dp[MAXN];
int v[111];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 1; i<=n; ++i) {
        scanf("%d", v+i);
    }

    for (int i = 1; i<=k; ++i) {
        for (int j = 1; j<=n; ++j) {
            if (v[j] > i) break;
            dp[i] |= !dp[i-v[j]];
        }
    }
    puts(dp[k] ? "First" : "Second");
}
