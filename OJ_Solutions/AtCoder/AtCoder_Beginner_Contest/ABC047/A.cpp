#include <bits/stdc++.h>

int main() {
    int sum = 0, max = 0, n = 3, a;
    while (n--) {
        scanf("%d", &a);
        if (a > max) max = a;
        sum += a;
    }
    puts(sum - max == max ? "Yes" : "No");
}
