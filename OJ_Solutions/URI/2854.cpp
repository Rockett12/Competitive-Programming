#include <map>
#include <iostream>
#include <vector>
#define MAXN 333
using namespace std;
int pai[MAXN], r[MAXN], sz, n, m, cur = 0;
map<string, int> mp;
int findSet(int i) {return i == pai[i]? i : pai[i] = findSet(pai[i]);}
void join (int a, int b) {
    a = findSet(a);
    b = findSet(b);
    if (a == b) return;
    if (r[b] > r[a])
        swap(a,b);
    pai[b] = a;
    if (r[b]==r[a])
        ++r[a];
    --sz;
}
int main(){
    ios::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i<=n; ++i)
        pai[i] = i;
    sz = n;
    string s, ss, a;
    while (m--) {
        cin >> s >> a >> ss;
        if(!mp[s])
            mp[s] = ++cur;
        if(!mp[ss])
            mp[ss] = ++cur;

        join(mp[s], mp[ss]);
    }

    cout << sz << '\n';

}
