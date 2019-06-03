#include <bits/stdc++.h>

int main() {
    long long int r, d, x, n = 10;
    scanf("%lld %lld %lld", &r, &d, &x);
    while (n--) {
        x = r*x-d;
        printf("%lld\n", x);
    }
}
