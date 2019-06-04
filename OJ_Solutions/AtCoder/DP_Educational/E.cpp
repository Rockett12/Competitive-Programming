#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>
#define F first
#define S second
#define INF 0x3f3f3f3f
#define MAXN 100005
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> graph;

int dp[MAXN];
int v[112], w[112];
int main() {
    int n, m, ans = 0;
    scanf("%d %d", &n, &m);
    for (int i = 1; i<=n; ++i) {
        scanf("%d %d", w+i, v+i);
    }
    dp[0] = m;
    for (int i = 1; i<=n; ++i) {
        for (int j = ans; j>=0; --j) {
            if (dp[j]>=w[i]) {
                dp[j+v[i]] = max(dp[j+v[i]], dp[j]-w[i]);
                if (j+v[i]> ans) ans = j+v[i];
            }
        }
    }
    printf("%d\n", ans);
}


