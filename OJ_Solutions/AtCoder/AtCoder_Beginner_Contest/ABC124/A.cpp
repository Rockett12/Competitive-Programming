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
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int ans = n+k;
    ans = max(ans, 2*n-1);
    ans = max(ans, 2*k-1);
    printf("%d\n", ans);
}
