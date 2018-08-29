#include <cstdio>
#include <algorithm>
#define MAXN 112345
using namespace std;
typedef long long int ll;
ll v[MAXN];
bool valid[MAXN];
int main() {
    int n, k, ans = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i<n; ++i)
        scanf("%I64d", v+i);

    sort(v, v+n);

    for (int i = 0, p; i<n; ++i) {
        if(valid[i])
            continue;

        p = (int)(lower_bound(v+i, v+n, v[i]*(ll)k)-v);
        if(p!=i && p<n && v[i]*(ll)k == v[p])
            valid[p] = 1;

        ++ans;
    }

    printf("%d\n", ans);
}
