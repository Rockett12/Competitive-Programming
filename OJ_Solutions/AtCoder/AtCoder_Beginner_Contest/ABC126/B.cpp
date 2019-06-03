#include <bits/stdc++.h>
#define endl '\n'
using ll = long long int;

int main() {
    int n, m, k;
    scanf("%2d%2d", &n, &m);
    if (n && m && n <= 12 && m <= 12) {
        puts("AMBIGUOUS");
    } else if (n && n <= 12) {
        puts("MMYY");
    } else if (m && m <= 12) {
        puts("YYMM");
    } else {
        puts("NA");
    }
}
