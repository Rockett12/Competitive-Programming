#include <cstdio>
#include <algorithm>
#define MAXN 412345
using namespace std;
typedef long long int ll;
ll t[MAXN], lazy[MAXN];
void build(int p, int l,  int r)
{
    int left = p<<1, right = p<<1|1, mid = (l+r)>>1;
    if(l==r)
        t[p] = 0;

    else
    {
        build(left, l, mid);
        build(right, mid+1, r);
        t[p] = t[left]+t[right];
    }
    lazy[p]=0;
}
void push(int v, int l, int r)
{
    t[v] += lazy[v]*(r-l+1);
    if(l!=r)
    {
        lazy[v<<1]+=lazy[v];
        lazy[v<<1|1]+=lazy[v];
    }

    lazy[v]=0;
}

void update(int p, int l, int r, int a, int b, ll val)
{
    int left = p<<1, right = p<<1|1, mid = (l+r)>>1;

    if(lazy[p])
        push(p, l,r);

    if(l>r || a>r || b<l) return;

    if(a<=l && b>=r)
    {
        t[p]+=val*(r-l+1);

        if(l!=r)
        {
            lazy[right]+=val;
            lazy[left]+=val;
        }
    }
    else
    {
        update(left, l, mid, a, b, val);
        update(right, mid+1, r, a, b, val);

        t[p] = t[left]+t[right];
    }
}

ll query(int p, int l, int r, int a, int b)
{
    int left = p<<1, right = p<<1|1, mid = (l+r)>>1;

    if(lazy[p])
        push(p, l,r);
    if(l>r || a>r || b<l)
        return 0;

    if(a<=l && r<=b)
        return t[p];

    return query(left, l, mid, a, b)+ query(right, mid+1, r, a, b);
}
int main()
{
    int t, n, c, a, b, i, l, r;
    ll val;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &c);

        build(1, 0, n-1);

        while(c--)
        {
            scanf("%d %d %d",&i, &a, &b);
            if(i&1)
                printf("%lld\n", query(1, 0, n-1, min(a-1,b-1), max(a-1,b-1)));
            else
                scanf("%lld", &val), update(1, 0, n-1, min(a-1, b-1), max(a-1,b-1), val);
        }
    }
}
