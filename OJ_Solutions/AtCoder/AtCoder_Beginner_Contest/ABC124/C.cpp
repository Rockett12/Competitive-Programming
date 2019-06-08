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
int main() {$
    int n, k;
    string s;
    cin >> s;
    int ans1 = 0, ans2 = 0;
    n = s.size();
    for (int i = 0; i<n; ++i) {
        if (i&1) {
            if (s[i] == '0'){
                ++ans2;
            } else {
                ++ans1;
            }
        } else {
            if (s[i] == '1') {
                ++ans2;
            } else {
                ++ans1;
            }
        }
    }
    cout << min(ans2,ans1) << endl;
}
