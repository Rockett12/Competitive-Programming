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
const int MAXN = 1123456;
int v[444];
int main() {
    int n, m, k;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 0; i<n; ++i) {
        scanf("%d", v+i);
    }
    for (int i = 0, x; i<n; ++i) {
        scanf("%d" ,&x);
        v[i]-=x;
        if (v[i] >0) ans += v[i];
    }
    printf("%d\n", ans);
}
