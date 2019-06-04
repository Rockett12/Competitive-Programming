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
int sp[20][MAXN];
int lg[MAXN];
int main() {
    int n, m, k;
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        scanf("%d", sp[0]+i);
    }
    lg[1] = 0; 
    lg[2] = 1;
    for (int i = 2; i < MAXN-5; ++i) {
        lg[i] = lg[i>>1]+1;
    }
    for (int j = 1; j<20; ++j) {
        for (int i = 0; i+(1<<j)-1<=n; ++i) {
            sp[j][i] = __gcd(sp[j-1][i], sp[j-1][i+(1<<j-1)]);
        }
    }
    //printf("%d %d %d\n", sp[1][1], sp[1][2], sp[2][0]);
    int ans = 0;
    int g1, g2;
    for (int i = 1, pre, nxt, j; i<=n; ++i) {
        g1 = 0, g2 = 0;
        pre = lg[i-1], nxt = lg[n-i];
        if (i > 1) g1 = __gcd(sp[pre][1], sp[pre][i-(1<<pre)]);
        if (i < n) g2 = nxt = __gcd(sp[nxt][i+1], sp[nxt][n-(1<<nxt)+1]);
        ans = max(ans, __gcd(g1, g2));
    }
    printf("%d\n", ans);
}
