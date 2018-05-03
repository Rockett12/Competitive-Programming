#include <cstdio>
#define MAXN 412345
int v[MAXN];
char st[MAXN];
void build (int p, int l ,int r)
{
    if(l==r)
    {
        if(v[r]==0)
            st[p] = '0';
        else if(v[r]<0)
            st[p] = '-';
        else
            st[p] = '+';
    }
    else
    {
        int mid = (l+r)>>1, left = p<<1, right = left|1;
        build(left, l ,mid);
        build(right, mid+1, r);

        if(st[left]=='0' || st[right]=='0')
            st[p]='0';
        else if(st[left]==st[right])
            st[p] = '+';
        else
            st[p] = '-';

    }
}

char query(int p, int l, int r, int a , int b)
{
    if(a>r || b<l) return '+';
    if(a<=l && r<=b) return st[p];

    int mid = (l+r)>>1, left = p<<1, right = left|1;

    char ve = query(left, l, mid, a, b), vr = query(right, mid+1, r, a,b);
    if(ve == '0' || vr == '0')
        return '0';
    if(ve == vr)
        return '+';

    return '-';
}

void update(int p, int l ,int r, int idx, int val)
{
    if(l==r)
    {
        if(val==0)
            st[p] = '0';
        else if(val<0)
            st[p] = '-';
        else
            st[p] = '+';
        return;
    }
    int mid = (l+r)>>1, left = p<<1, right = left|1;
    if(idx<=mid)
        update(left, l, mid, idx, val);
    else
        update(right, mid+1, r, idx, val);

    if(st[left]=='0' || st[right]=='0')
        st[p]='0';
    else if(st[left]==st[right])
        st[p] = '+';
    else
        st[p] = '-';
}
int main()
{
    int n , m ,q, a,b;
    char x;

    while(scanf("%d %d", &n, &q)!=EOF)
    {
        for(int i = 1; i<=n; ++i)
            scanf("%d", v+i);

        build(1,1,n);

        while(q--)
        {
            scanf(" %c %d %d", &x, &a, &b);
            if(x=='C')
                update(1,1,n, a,b);
            else
                printf("%c", query(1,1,n,a,b));
        }
        puts("");
    }
}

