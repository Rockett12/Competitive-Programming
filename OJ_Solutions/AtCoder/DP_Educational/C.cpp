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
int dp[4][MAXN], v[4][MAXN];
int main() {
    int n, k;
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        for (int j = 1; j<=3; ++j) {
            scanf("%d", v[j]+i);
        }
    }
    for (int i = 1; i<=3; ++i) dp[i][1] = v[i][1]; 
    for (int i = 2; i<=n; ++i) {
        dp[1][i] = max(dp[2][i-1], dp[3][i-1])+v[1][i];
        dp[2][i] = max(dp[1][i-1], dp[3][i-1])+v[2][i];
        dp[3][i] = max(dp[2][i-1], dp[1][i-1])+v[3][i];
    }
    printf("%d\n", max(dp[1][n], max(dp[2][n], dp[3][n])));
}

