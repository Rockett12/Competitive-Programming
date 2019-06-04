#include <bits/stdc++.h>

#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define endl '\n'

using namespace std;
using ll = long long int;
using ii = pair<int, int>;
using li = pair<ll, int>;
using vi = vector<int>;
using vii = vector<ii>;
using graph = vector<vi>;


const ll mod =  1000000007;
const int INF = 0x3f3f3f3f;
const int MAXN = 312345;
const double pi = 3.14159265359;
const double eps = 0.000000001;
int v[500];
int main() {
    int n, K;
    scanf("%d %d", &n, &K);
    for (int i = 0; i<n; ++i) {
        scanf("%d", v+i);
        v[i+n] = v[i];
    }
    
    set<ii> s;
    int sum, ret, ans = 0;
    for (int k = K, ld, d = 0; k>0; --k, ++d) {
        sum = 0, ret = 0;
        s.clear();
        for (int i = max(n-k, 0); i<n && i < 2*n; ++i) {
            sum += v[i];
            s.emplace(v[i], i);
        }
        ld = 0;
        for (auto it = s.begin(); it != s.end() && ld < d; ++ld, ++it) {
            if (it->first < 0) {
                ret += it->first;
            }
        }
        ans = max(ans,sum-ret);
        for (int i = max(n-k, 0)+1, j = n; i <= n && j < 2*n; ++j, ++i) {
            sum += v[j] - v[i-1]; 
            ret = 0;
            s.erase({v[i-1], i-1});
            s.emplace(v[j], j);
            ld = 0;
            for (auto it = s.begin(); it != s.end() && ld < d; ++ld, ++it) {
                if (it->first < 0) {
                    ret += it->first;
                }
            }
            ans = max(ans, sum - ret);
        }
    }
    printf("%d\n", ans);
}
