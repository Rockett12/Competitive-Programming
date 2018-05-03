#include <iostream>
#include <vector>
#include <algorithm>
#define MAXN 412345
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
int mon[MAXN];
ll seg[MAXN];

void build(int p, int l, int r)
{
    if(l==r)
    {
        seg[p] = (1LL<<mon[l]);
        return;
    }
    int mid = (l+r)>>1;
    build(p<<1, l ,mid);
    build(p<<1|1, mid+1, r);
    ll ve = seg[p<<1], vr = seg[p<<1|1];
    seg[p] = ve|vr;
}

ll query(int p,int l ,int r, int a, int b)
{
    if(b<l || a>r) return 0LL;
    if(a<=l && r<=b) return seg[p];
    int mid = (l+r)>>1;
    ll ve = query(p<<1, l, mid, a, b);
    ll vr = query(p<<1|1, mid+1, r, a, b);

    return ve|vr;
}

void update(int p, int l, int r, int idx, int val)
{
    if(l==r)
        seg[p] = 1LL<<val;
    else
    {
        int mid = (l+r)>>1;

        if(idx<=mid)
            update(p<<1, l, mid, idx, val);
        else
            update(p<<1|1, mid+1, r, idx, val);

        seg[p] = seg[p<<1]|seg[p<<1|1];
    }
}
int main()
{$
    int n, m, q,a,b, c;
    ll resp;
    cin>>n>>q>>m;
    for(int i = 1; i<=n; ++i)
        cin>>mon[i];

    build(1,1,n);
    while(q--)
    {
        cin>>c>>a>>b;
        if(c&1)
        {
            if(a>b)
                a^=b, b^=a, a^=b;
            resp = query(1,1,n, a,b);
            c = 0;
            while(resp)
            {
                if(resp&1LL)
                    ++c;
                resp>>=1LL;
            }

            cout<<c<<'\n';
        }
        else
            update(1,1,n, a,b);
    }
}

