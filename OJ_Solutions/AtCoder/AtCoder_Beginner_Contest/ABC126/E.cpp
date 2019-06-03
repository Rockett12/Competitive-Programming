#include <bits/stdc++.h>
#define endl '\n'
#define F first
#define $ ios::sync_with_stdio(0);
#define S second
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<pair<int, int> >;
using graph = vector<vi>;
const int MAXN = 312345;
const int INF = 0x3f3f3f3f;
int n, pai[MAXN], r[MAXN];
int findS(int i) {return i == pai[i] ? i : pai[i] = findS(pai[i]); }
void join(int a, int b) {
    a = findS(a);
    b = findS(b);
    if (a == b) return;
    if (r[b] > r[a]) swap(a, b);
    pai[b] = a;
    r[a] += r[b];
    n--;
}
int main() {
    int m, k;
    scanf("%d %d", &n, &m);
    for (int i = 1; i<=n; ++i) {
        pai[i] = i;
        r[i] = i;
    }
    int u, v, w;
    while (m--) {
        scanf("%d %d %*d", &u, &v);
        join(u, v);
    }
    printf("%d\n", n);
}
