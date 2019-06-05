#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MAXN = 212345;
int n, m, k;
ll ft[MAXN];
ll get(int x) {
    ll ans = 0;
    for (; x; x-=x&-x) {
        ans = max(ans, ft[x]);
    }
    return ans;
}

void update(int x, ll v) {
    for (; x<=n; x+=x&-x) {
        ft[x] = max(v, ft[x]);
    }
}

int h[MAXN], v[MAXN];
int main() {
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        scanf("%d", h+i);
    }
    for (int i = 1; i<=n; ++i) {
        scanf("%d", v+i);
    }
    ll ans = 0, sum;
    for (int i = 1; i<=n; ++i) {
        sum = get(h[i])+v[i];
        update(h[i], sum);
    }
    printf("%lld\n", get(n));
}
