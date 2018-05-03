#include <cstdio>
#define $ ios::sync_with_stdio(0);
#define MAXN 412345
using namespace std;
int seg[MAXN], v[MAXN], lazy[MAXN];
void build(int p , int l, int r)
{
    int mid = (l+r)>>1, left = p<<1, right = p<<1|1;
    if(l==r)
        seg[p] = v[r];
    else
    {
        build(left, l, mid);
        build(right, mid+1, r);
        seg[p] = seg[left]^seg[right];
    }
}



void update(int p, int l, int r, int a, int b, int val)
{
    int mid = (l+r)>>1, left = p<<1, right = p<<1|1;
    if(lazy[p])
    {
        seg[p] = (l-r+1)&1? lazy[p] : 0;

        if(l^r)
            lazy[left] = lazy[right] = lazy[p];

        lazy[p] = 0;
    }

    if(a>r || b<l) return;

    if(a<=l && r<=b)
    {
        seg[p] = (l-r+1)&1? val : 0;
        if(l^r)
            lazy[left] = lazy[right] = val;
    }
    else
    {
        update(left, l, mid, a, b, val);
        update(right, mid+1, r, a,b,val);

        seg[p] = seg[left]^seg[right];
    }
}
int main()
{
    int n , m,a,b,val;
    scanf("%d %d", &n, &m);
    for(int i = 1; i<=n; ++i)
        scanf("%d", v+i);

    build(1,1,n);

    while(m--)
    {
        scanf("%d %d %d", &a, &b, &val);
        update(1,1,n,a,b,val);
        if(seg[1])
            puts("Possivel");
        else
            puts("Impossivel");
    }
}
