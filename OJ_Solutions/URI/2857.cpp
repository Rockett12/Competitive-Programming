#include <cstdio>
#define MAXN 112345
using namespace std;
int ft[MAXN], sum, n;
inline void getsum(int a, int b) {
    for (int x = b; x; x-=(-x)&x)
        sum+=ft[x];
    for (int x = a; x; x-=(-x)&x)
        sum-=ft[x];
}

inline void update(int a, int b) {
    for (int x = a; x<=n; x+=(-x)&x)
        ft[x]+=b;
}

int main() {
    int m,a,b,c,d, t;
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d", &t);
        if (t&1) {
            scanf("%d %d", &a, &b);
            update(a,b);
        } else {
            scanf("%d %d %d %d", &a, &b, &c, &d);
            sum = 0;
            if (a>d || c>b) {
                getsum(a-1, b);
                getsum(c-1, d);
            } else {
                if (c<a) a = c;
                if (d>b) b = d;
                getsum(a-1, b);
            }
            printf("%d\n", sum);
        }
    }
}
