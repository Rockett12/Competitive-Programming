#include <cmath>
#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 412345
using namespace std;

struct her{
    int man, php, rat, temp;
    her():man(1),php(0),rat(0){}
    her(int t):man(0),php(0),rat(0){}
    her& operator+=(const her& other){
        man+=other.man;
        php+=other.php;
        rat+=other.rat;
        return *this;
    }

    friend her operator+(her me, const her& other){
        me+=other;
        return me;
    }
    void operator=(const her& other)
    {
        man=other.man;
        php=other.php;
        rat=other.rat;
    }

    void rot(int t)
    {
        t%=3;
        if(t&1)
        {
            temp = rat;
            rat = php;
            php = man;
            man = temp;
        }
        else if(t&2)
        {
            temp = php;
            php = rat;
            rat = man;
            man = temp;
        }
    }

};

her t[MAXN];
int lazy[MAXN];


void build(int p, int l, int r)
{
    int esq =p<<1, dir = p<<1|1;

    int mid=(l+r)>>1;
    if(l==r)
        t[p] = her();
    else
    {
        build(esq,l, mid);
        build(dir,mid+1, r);
        t[p] = t[esq]+t[dir];
    }

    lazy[p]=0;
}

void update(int p, int l, int r, int a, int b)
{
    int esq = p<<1, dir = ((p<<1)|1), mid = (l+r)>>1;
    if(lazy[p])
    {
        t[p].rot(lazy[p]);
        if(l!=r)
            lazy[esq]+=lazy[p], lazy[dir]+=lazy[p];
        lazy[p]=0;
    }

    if(l>r || b<l || a>r)
        return;

    if(a <= l && r <= b)
    {
        t[p].rot(1);

        if(l!=r)
            ++lazy[esq], ++lazy[dir];
    }

    else
    {
        update(esq, l, mid, a, b);
        update(dir, mid+1, r, a, b);

        t[p] = t[esq]+t[dir];
    }
}

her query(int p, int l, int r, int a, int b)
{
    int esq = p<<1, dir = p<<1|1, mid = ((l+r)>>1);
    if(lazy[p])
    {
        t[p].rot(lazy[p]);
        if(l!=r)
            lazy[esq]+=lazy[p], lazy[dir]+=lazy[p];
        lazy[p]=0;
    }

    if(l>r || a>r || b<l)
        return her(0);

    if(a <= l && r <= b)
        return t[p];

    else
    {
        her filho = query(esq, l, mid,a, b);
        her filha = query(dir, mid+1, r,a, b);

        return filho+filha;
    }
}

int main()
{$
    int n, q, a, b;
    char x;
    her mlk;
    while(cin>>n>>q)
    {
        build(1, 0, n-1);

        while(q--)
        {
            cin>>x>>a>>b;

            if(x=='C')
            {

                mlk = query(1,0,n-1,a-1,b-1);
                cout<<mlk.man<<" "<<mlk.php<<" "<<mlk.rat<<endl;
            }
            else
                update(1,0,n-1,a-1,b-1);
        }
        cout<<endl;
    }
}
