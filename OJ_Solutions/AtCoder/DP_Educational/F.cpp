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
const int MAXN = 3123;
int dp[MAXN][MAXN];
int main() {$
    int n, m;
    string s, t;
    cin >> s >> t;
    n = s.size();
    m = t.size();
    s = '0'+s;
    t = '0'+t;
    for (int i = 1; i<=n; ++i) {
        for (int j = 1; j<=m; ++j) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if (s[i] == t[j]) dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
        }
    }

    int i = n, j = m;
    string r = "";
    if (dp[i][j] == 0) {
        cout << "" << endl;
        return 0;
    }
    while (i > 0 && j > 0) {
        if (dp[i-1][j] == dp[i][j]) i--;
        else if (dp[i][j-1] == dp[i][j]) j--;
        else r+=s[i], i--, j--;
    }
    reverse(r.begin(), r.end());
    cout << r << endl;
}

