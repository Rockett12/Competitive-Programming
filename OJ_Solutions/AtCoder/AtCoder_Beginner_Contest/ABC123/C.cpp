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
    ll n, m, k;
    scanf("%lld", &n);
    m = INFL;
    for (ll i = 0, x; i<5LL; ++i) {
        scanf("%lld", &x);
        m = min(m, x);
    }
    m = (n+m-1LL)/m;
    printf("%lld\n", 4LL+m);
}
