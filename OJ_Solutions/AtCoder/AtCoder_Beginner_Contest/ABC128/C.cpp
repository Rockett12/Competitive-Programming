#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3000;
int hmb[MAXN],p[MAXN], bm[MAXN];
int main() {
    int n, m;
    for (int i = 0, cnt, j; i<=2000; ++i) {
        cnt = 0; 
        j = i;
        while (j) {
            if (j&1) ++cnt;
            j>>=1;
        }
        hmb[i] = cnt;
    }
    scanf("%d %d", &n, &m);
    for (int i = 0, k, c; i<m; ++i) {
        scanf("%d", &k);
        while (k--) {
            scanf("%d", &c);
            bm[i]|=1<<c-1;
        }
    }
    for (int i = 0; i<m; ++i) {
        scanf("%d", p+i);
    }
    int ans = 0;
    for (int mask = 0, f; mask<1<<n; ++mask) {
        f = 1;
        for (int j = 0; j<m && f; ++j) {
            if ((hmb[mask&bm[j]]&1) != p[j]) f = 0;
        }
        ans += f;
    }
    printf("%d\n", ans);
}
