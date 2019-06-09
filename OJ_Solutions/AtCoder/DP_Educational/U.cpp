#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
using ii = pair<int, ll>;
using li = pair<ll, int>;
using vi = vector<int>;
using vii = vector<ii>;
using graph = vector<vii>;

const ll MOD =  1000000007;
const int INF= 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 16;
const double PI = 3.14159265359;
const double EPS = 0.000000001;
ll cost[1<<16], dp[1<<16], adj[20][20];
int lg[1<<16];
int main() {
    int n, m, k;
    scanf("%d", &n);
    for (int i = 0; i<n; ++i) {
        for (int j = 0; j<n; ++j) {
            scanf("%lld", &adj[i][j]);
        }
    }
    int mask = 1<<n; 
    for (int i = 2; i<mask; ++i) {
        lg[i] = lg[i>>1]+1;
    }
    for (int i = 1, j, u; i<mask; ++i) {
        cost[i] = cost[i-(i&-i)];
        j = i-(i&-i);
        u = lg[i&-i];
        while (j) {
            cost[i] += adj[u][lg[j&-j]];
            j -= j&-j;
        }
    }
    ll ans;
    for (int i = 1; i<mask; ++i) {
        ans = 0;
        for (int j = i; j>0; j = (j-1)&i) {
            ans = max(ans, cost[j] + dp[i-j]);
        }
        dp[i] = ans;
    }
    printf("%lld\n", dp[mask-1]);
}

