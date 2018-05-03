#include <cstdio>
#include <cmath>
#include <algorithm>
#define MAXN 412345

using namespace std;

class Maxmin{
public:

    int major, minor;
    Maxmin(){
        major = -1;
        minor = -1;
    }
    Maxmin(int maxx,int minn){
        major = maxx;
        minor = minn;
    }
    int mxd()
    {
        return abs(major-minor);
    }

};
int v[MAXN];
Maxmin st[MAXN];

void build(int p, int l, int r)
{
    if(l==r)
    {
        st[p].major = v[r];
        st[p].minor = v[r];
    }
    else
    {
        int mid = (l+r)>>1;
        build(p<<1, l, mid);
        build(p<<1|1, mid+1, r);
        st[p].major = max(st[p<<1].major,st[p<<1|1].major);
        st[p].minor = min(st[p<<1].minor,st[p<<1|1].minor);
    }
}

Maxmin query(int p,  int l, int r, int a, int b)
{
    if(a>r || b<l)
        return Maxmin();
    if(a<=l && r<=b)
        return st[p];
    int mid = (l+r)>>1;

    Maxmin left = query(p<<1,l, mid, a,b), right = query(p<<1|1, mid+1, r, a,b);
    if(left.minor==-1)
        return right;
    if(right.minor == -1)
        return left;

    int maxx = max(right.major, left.major), minn = min(right.minor, left.minor);

    return Maxmin(maxx, minn);
}

void update(int p, int l, int r, int idx, int val)
{
    if(l==r)
    {
        st[p].major = val;
        st[p].minor = val;
        return;
    }
    int mid = (l+r)>>1;
    if(idx<=mid)
        update(p<<1, l, mid, idx, val);
    else
        update(p<<1|1, mid+1, r, idx, val);

    st[p].major = max(st[p<<1].major,st[p<<1|1].major);
    st[p].minor = min(st[p<<1].minor,st[p<<1|1].minor);
}

int main()
{
    int n , m, q, op, a, b;
    Maxmin resp;
    while(scanf("%d", &n)!=EOF)
    {
        for(int i = 1; i<=n; ++i)
            scanf("%d", v+i);

        build(1,1,n);

        scanf("%d", &q);

        while(q--)
        {
            scanf("%d %d %d", &op, &a, &b);
            if(op&1)
            {
                update(1,1,n, a,b);
            }
            else
            {
                resp = query(1,1,n, a,b);
                printf("%d\n", resp.mxd());
            }
        }
    }
}

