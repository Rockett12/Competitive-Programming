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
    scanf("%d", &n);
    ll m = INF;
    k = 0;
    ll sum = 0;
    for (int  i = 0, x; i<n; ++i) {
        scanf("%d", &x);
        if (x < 0) {
            k++;
            sum-=x;
            if (-x < m) m = -x;
        } else {
            sum+=x;
            if (x < m) m = x;
        }

    }
    printf("%lld\n", k&1 ? sum-2LL*m : sum);
}
