#include <cstdio>
int v[50];
int main() {
    v[0] = v[1] = 1;
    for(int i = 2; i<=40; ++i)
        v[i] = v[i-1]+v[i-2];
    int n;
    while(scanf("%d", &n)&&n) {
        printf("%d\n", v[n]);
    }
}

