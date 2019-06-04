#include <bits/stdc++.h>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define endl '\n'
using namespace std;
using ll = long long int;
using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using graph = vector<vi>;
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 112345;
int dp[MAXN], h[MAXN];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        scanf("%d", h+i);
        dp[i] = INF;
    }
    dp[1] = 0;
    for (int i = 1; i<=n; ++i) {
        dp[i+1] = min(dp[i+1], abs(h[i]-h[i+1])+dp[i]); 
        dp[i+2] = min(dp[i+2], abs(h[i]-h[i+2])+dp[i]); 
    }
    printf("%d\n", dp[n]);
}

