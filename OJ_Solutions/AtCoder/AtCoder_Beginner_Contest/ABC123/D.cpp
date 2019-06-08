#include <bits/stdc++.h>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define endl '\n'
using namespace std;
using ll = long long int;
using ii = pair<ll, ll>;
using vi = vector<ll>;
using vii = vector<ii>;
using graph = vector<vi>;
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 2123;
ll a[MAXN], b[MAXN], c[MAXN];
int main() {
    int x,y,z,n,k;
    scanf("%d %d %d %d", &x, &y, &z, &k);
    for (int i = 0; i<x; ++i) {
        scanf("%lld", a+i);
        a[i] = -a[i];
    }
    for (int i = 0; i<y; ++i) {
        scanf("%lld", b+i);
        b[i] = -b[i];
    }
    for (int i = 0; i<z; ++i) {
        scanf("%lld", c+i);
        c[i] = -c[i];
    }
    sort(a, a+x);
    sort(b, b+y);
    sort(c, c+z);
    set<tuple<ll, int, int, int> > s;
    s.emplace(a[0]+b[0]+c[0], 0, 0, 0);
    vi output;
    ll m;
    int xx = x, yy = y, zz = z;
    while (k>0) {
        tie(m, x, y, z) = *s.begin();
        s.erase(s.begin());
        output.push_back(-m);
        if (x+1 < xx) s.emplace(m-a[x]+a[x+1], x+1,y, z);
        if (y+1 < yy) s.emplace(m-b[y]+b[y+1], x, y+1, z);
        if (z+1 < zz) s.emplace(m-c[z]+c[z+1], x, y, z+1);
        k--;
    }
    for (auto i : output) {
        printf("%lld\n", i);
    }
}
