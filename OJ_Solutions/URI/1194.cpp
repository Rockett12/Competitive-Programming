#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
int v[200], pidx[300], n, TC = 0, seen[200];
char pre[55], in[55], tree[312];

int build(int lt, int rt, int p, int pos) {
    if(pos == n || lt>rt)
        return pos-1;
    int idx = pidx[pre[pos]];
    tree[p] = in[idx];
    seen[p] = TC;

    pos = build(lt, idx-1, p<<1, pos+1);
    pos = build(idx+1, rt, p<<1|1, pos+1);
    return pos;
}

void pos(int p) {
    int np = p<<1;
    if (seen[np] == TC)
        pos(np);
    if (seen[np|1] == TC)
        pos(np|1);
    cout<<tree[p];
}

int main() {
    ios::sync_with_stdio(0);
    int t, m;
    while (t--) {
        ++TC;
        cin >> n;
        for (int i = 0; i<n; ++i) {
            cin>>pre[i];
        }
        for (int i = 0; i<n; ++i) {
            cin>>in[i];
            pidx[in[i]] = i;
        }

        build(0, n-1, 1, 0);
        pos(1);
        cout<< '\n';
    }

}
