#include <bits/stdc++.h>
int main() {
    int a, b, ans = 0;
    scanf("%d %d", &a, &b);
    if (a >= 13) {
        ans = b;
    } else if (a >= 6) {
        ans = b>>1;
    }
    printf("%d\n", ans);
}
