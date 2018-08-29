#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    int n, m, ans = 0, f=0, i ,s;
    scanf("%d %d", &n, &m);

    for (i = 1, s = sqrt(m); i<=s && i<=n; ++i) {
        if (m%i == 0) {
            if (m/i<=n)
                ++ans;
        }
    }
    ans<<=1;
    if(s<=n && s*s == m)
        --ans;
    printf("%d\n", ans);
}

