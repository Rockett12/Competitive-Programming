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
int v[44];
int main() {
    int n, m, k;
    m = 0;
    int ans = 0;
    for (int i = 0; i<5; ++i) {
        scanf("%d", v+i);
        if (v[i]%10 && (v[i]%10 <= m%10 || m == 0)) m = v[i];
        ans += (v[i]+9)/10*10;
    }
    printf("%d\n", ans - (m+9)/10*10 + m);
}
