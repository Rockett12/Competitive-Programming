#include <cstdio>
#include <vector>
#include <algorithm>
#define MAXN 112
#define F first
#define S second
using namespace std;
int pai[MAXN], r[MAXN], m;
typedef pair<int,int> ii;
typedef pair<int,ii> edge;

int findS(int i){return i==pai[i]?i:pai[i]=findS(pai[i]);}

bool join(int a, int b)
{
    a = findS(a);
    b = findS(b);
    if(a==b)
        return 0;
    if(r[b]>r[a])
        b^=a, a^=b, b^=a;

    if(r[a]==r[b])
        ++r[a];

    pai[b]=a;
    --m;
    return 1;
}

int main()
{
    int n ,p,s ,u,v,w;
    vector<edge> pri, sec;
    scanf("%d %d %d", &n, &p, &s);
    for(int i = 0; i<=n; ++i)
        pai[i] = i, r[i] = 0;

    m = n;
    for(int i = p; i--;)
    {
        scanf("%d %d %d", &u, &v, &w);
        pri.push_back(edge(w,ii(u,v)));
    }
    for(int i = s; i--;)
    {
        scanf("%d %d %d", &u, &v, &w);
        sec.push_back(edge(w,ii(u,v)));
    }

    sort(pri.begin(), pri.end());
    sort(sec.begin(), sec.end());

    edge e;
    int cost = 0;
    for(int i = 0; i<p && m>1; ++i)
    {
        e = pri[i];
        if(join(e.S.F, e.S.S))
            cost+=e.F;
    }

    for(int i = 0; i<s && m>1; ++i)
    {
        e = sec[i];
        if(join(e.S.F, e.S.S))
            cost+=e.F;
    }

    printf("%d\n", cost);
}
