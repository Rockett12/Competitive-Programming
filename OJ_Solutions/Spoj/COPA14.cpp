
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#define F first
#define S second
#define PB push_back
#define MAXN 105
using namespace std;

typedef pair<int ,int > ii;
typedef pair<int, ii> kk;
typedef vector<kk> edge;
int pai[MAXN], peso[MAXN], n;

void build()
{
    for(int i =1; i<=n; ++i)
        pai[i]=i;
}

int findSet(int i ){return pai[i]==i?i:pai[i]=findSet(pai[i]);}

int join(int a, int b)
{
    a = findSet(a);
    b = findSet(b);

    if(a==b)
        return 0;

    if(peso[a]>peso[b])
        pai[b]=a;
    else
    {
        if(peso[a]==peso[b])
            peso[b]++;

        pai[a]=b;
    }

    return 1;
}

int main()
{
    int f, r, u , v, w, cost =0;
    scanf("%d %d %d", &n, &f,&r);
    edge e;
    build();

    while(f--)
    {
        scanf("%d %d %d", &u, &v, &w);
        e.PB(kk(w,ii(u,v)));
    }
    f = n-1;
    sort(e.begin(), e.end());

    for(int i = 0; i<(int)e.size() && f; ++i)
    {
        if(join(e[i].S.F, e[i].S.S))
            cost+=e[i].F, f--;
    }

    e.clear();

    while(r--)
    {
        scanf("%d %d %d", &u, &v, &w);
        e.PB(kk(w,ii(u,v)));
    }

    sort(e.begin(), e.end());

    for(int i = 0; i<(int)e.size() && f; ++i)
    {
        if(join(e[i].S.F, e[i].S.S))
            cost+=e[i].F, f--;
    }

    printf("%d\n", cost);
}
