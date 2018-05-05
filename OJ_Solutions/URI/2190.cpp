#include <cstdio>
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define MAXN 11234

using namespace std;
typedef pair<int,pair<int,int> >edge;
vector<edge> edl;
int pai[MAXN], r[MAXN];
int findS(int i){return i==pai[i]?i:pai[i] = findS(pai[i]);}

bool join(int a, int b)
{
    a = findS(a);
    b = findS(b);
    if(a==b)
        return 0;

    if(r[b]>r[a])
        a^=b, b^=a, a^=b;
    else if(r[b]==r[a])
        ++r[a];

    pai[b]=a;
    return 1;
}

int main()
{
    int n, m,u,v,w, j=0;
    edge e;
    while(scanf("%d %d", &n, &m)!=EOF && n)
    {
        edl.clear();
        for(int i = 1; i<=n; ++i)
            pai[i] = i, r[i] = 0;
        while(m--)
        {
            scanf("%d %d %d", &u, &v, &w);
            edl.eb(w,mp(u,v));
        }

        sort(edl.begin(), edl.end());
        printf("Teste %d\n", ++j);
        for(edge e : edl)
            if(join((u = e.S.F),(v = e.S.S)))
            {
                if(u>v)
                    u^=v, v^=u, u^=v;
                printf("%d %d\n", u, v);
            }

        puts("");
    }
}
