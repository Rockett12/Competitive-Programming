#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
using ii = pair<int, ll>;
using li = pair<ll, int>;
using vi = vector<int>;
using vii = vector<ii>;
using graph = vector<vii>;

const ll mod =  1000000007;
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 112345;
const double pi = 3.14159265359;
const double eps = 0.000000001;
int n;
int fq[4];
double dp[901][601][301];
bool seen[901][601][301];
double sol(int f1, int f2, int f3) {
    if (f1 < 0 || f2 < 0 || f3 < 0) return 0.;
    if (!f1 && !f2 && !f3) return 1.;
    bool &is = seen[f1][f2][f3];
    double &ans = dp[f1][f2][f3];
    if (is == 1) return ans;
    ans = (f1*sol(f1-1, f2, f3) + f2*sol(f1+1, f2-1, f3) + f3*sol(f1, f2+1, f3-1) + n)/(f1+f2+f3);
    is = 1;
    return ans;
}
int main() {
    scanf("%d", &n);
    for (int i = 1, x; i<=n; ++i) {
        scanf("%d", &x);
        fq[x]++;
    }
    printf("%.9lf\n", sol(fq[1], fq[2], fq[3])-1.);
}

