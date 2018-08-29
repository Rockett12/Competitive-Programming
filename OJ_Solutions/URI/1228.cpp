#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define MAXN 30
int ft[MAXN], idx[MAXN], tg[MAXN];
int main() {
    int n,m, x;
    while (scanf("%d", &n)!=EOF) {
        m = 0;
        for(int i = 1; i<=n; ++i) {
            scanf("%d", &x);
            idx[x] = i;
            ft[i] = 0;
        }

        for(int i = 1; i<=n; ++i) {
            scanf("%d", &x);
            tg[i] = idx[x];
        }

        for(int i = n; i>0; --i) {
            for(x = tg[i]-1; x; x-=x&(-x))
                m+=ft[x];
            for(x = tg[i]; x<=n; x+=x&(-x))
                ++ft[x];
        }

        printf("%d\n", m);

    }
}

