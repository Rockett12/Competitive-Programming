#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ii = pair<ll, ll>;
const int maxn = 212345;
ll v[maxn];
vector<ii> p;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i<n; ++i) {
        scanf("%lld", v+i);
    }
    sort(v, v+n);

    for (int i = 0, u, w; i<m; ++i) {
        scanf("%d %d", &u, &w);
        p.emplace_back(-w, u);
    }
    sort(p.begin(), p.end());

    int i = 0, j = 0, u, w;
    ll ans = 0;
    while (i < n && j < m) {
        tie(w, u) = p[j];
        while (u && i < n && v[i] < -w) {
             ans -= w;
             ++i;
             --u;
        }
        if (i < n) {
            if (u > 0) {
                ans += v[i];
                ++i;
            } else {
                ++j;
            }
        }
    }
    while (i < n) ans += v[i++];

    printf("%lld\n", ans);
}
