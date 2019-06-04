#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
using ii = tuple<int, int, int>;
using li = pair<ll, int>;
using vi = vector<int>;
using vii = vector<ii>;
using graph = vector<vi>;

const ll mod =  1000000007;
const int INF = 0x3f3f3f3f;
const int MAXN = 2123456;
const double pi = 3.14159265359;
const double eps = 0.000000001;
int fq[10];

int main() {
    int n, m, k;
    scanf("%d", &n);
    for (int i = 0, x; i<n; ++i) {
        scanf("%d", &x);
        fq[x]++;
    }

    if (fq[1] <= 1) {
        if (fq[1] == 1) {
            printf("1 ");
        }
        while (fq[2]--) {
            printf("2 ");
        }
    } else {
        printf("1 "); 
        fq[1]--;
        int k = fq[1] >> 1, q = fq[1]&1;
        while (k--) {
            printf("1 1 ");
        }

        while (fq[2]--) {
            printf("2 ");
        }
        if (q) {
            printf("1");
        }
    }
    puts("");
}

