#include <bits/stdc++.h>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define endl '\n'
using namespace std;
using ll = long long int;
using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using graph = vector<vi>;
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 112345;
int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vi v;
    if (s[0] == '1') v.push_back(0);
    char last = s[0];
    s.push_back(s.back()^1);
    for (int i = 0, cnt = 0; i<=n; ++i) {
        if (s[i] == last) {
            cnt++;
        } else {
            v.push_back(cnt);
            cnt = 1;
        }
        last = s[i];
    }
    if ((int)v.size()&1) v.push_back(0);
    int ans = 0;
    n = v.size();
    for (int i = 0; i<k<<1 && i<n; ++i) {
        ans += v[i];
    }
    int sum = ans;
    for (int i = 0, j = k<<1; j<=n; ++i, ++j) {
        if (j&1 && j < n) {
            ans = max(ans, sum+v[j]);
        } else {
            ans = max(ans, sum);
        }
        sum-=v[i];
        if (j<n) sum+=v[j];
    }
    printf("%d\n", ans);
}
