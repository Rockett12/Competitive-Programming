#include <bits/stdc++.h>

using namespace std;
using ll = long long int ;
using vi = vector<ll>;
using matrix = vector<vi>;
const int mod = 1000000007;
int n;
matrix cross(matrix a, matrix b) {
    matrix c(n, vi(n, 0));
    for (int i = 0; i<n; ++i) {
        for (int k = 0; k<n; ++k) {
            for (int j = 0; j<n; ++j) {
                c[i][j] += a[i][k] * b[k][j];
                if (c[i][j] >= mod) c[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix bxp(matrix base, ll xp) {
    matrix ans(n, vi(n));
    for (int i = 0; i<n; ++i) ans[i][i] = 1;
    while (xp) {
        if (xp&1ll) ans = cross(ans, base);
        base = cross(base, base);
        xp>>=1ll;
    }
    return ans;
}

int main() {
    int m;
    ll k;
    scanf("%d %lld", &n, &k);
    matrix base(n, vi(n));
    for (int i = 0; i<n; ++i) {
        for (int j = 0; j<n; ++j) {
            scanf("%lld", &base[i][j]);
        }
    }
    base = bxp(base, k);
    ll ans = 0;
    for (int i = 0; i<n; ++i) {
        for (int j = 0; j<n; ++j) {
            ans += base[i][j];
            if (ans >= mod) ans -= mod;
        }
    }
    printf("%lld\n", ans);
}
