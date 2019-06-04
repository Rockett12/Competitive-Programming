#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3123;
double pi[MAXN], dp[MAXN];
int main() {
    int n, m, k;
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        scanf("%lf", pi+i);
    }
    for (int i = n+1>>1; i<=n; ++i) dp[i] = 1.;
    for (int i = 1; i<=n; ++i) {
        for (int h = 0; h<=n-i; ++h) {
            dp[h] = pi[i]*dp[h+1]+(1.-pi[i])*dp[h];
        }
    }
    printf("%.9lf\n", dp[0]); 
}
