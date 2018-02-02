#include <iostream>
#include <algorithm>
#include <vector>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 10005
using namespace std;

typedef pair<int, int> ii;
typedef pair<int , ii > pii;

int pai[MAXN], paimax[MAXN], peso[MAXN], pesomax[MAXN];

void build(int n)
{
    for(int i = 1; i<=n; ++i)
        pai[i]=i, peso[i]=0,
        paimax[i]=i, pesomax[i]=0;
}

int findSet(int i,int pai[])
{
    return pai[i] == i? i : pai[i] = findSet(pai[i], pai);
}

bool join(int a, int b, int pai[], int peso[])
{
    a = findSet(a, pai);
    b = findSet(b, pai);

    if(a == b)
        return 0;

    if(peso[a]>peso[b])
        pai[b]= a;
    else
    {
        if(peso[a] == peso[b])
            ++peso[b];

        pai[a]=b;
    }

    return 1;
}

int main()
{_
    int n, m, smin, smax, u, v, w;
    vector<pii> edge, edgemax;

    while((cin>>n>>m)&&n)
    {
        edge.clear();
        edgemax.clear();
        build(n);
        smin = smax = 0;

        for(int i=0; i<m; ++i)
        {
            cin>>u>>v>>w;
            edge.push_back(pii(w, ii(u,v)));
        }

        sort(edge.begin(), edge.end());

        edgemax.assign(edge.begin(), edge.end());
        for(int i =0, t = 1; i<m && t<n; ++i)
        {
            if(join(edge[i].S.F, edge[i].S.S, pai, peso))
                ++t, smin+=edge[i].F;
        }

        for(int i = m-1, t = 1; i>=0 && t<n; --i)
        {
            if(join(edgemax[i].S.F, edgemax[i].S.S, paimax, pesomax))
                ++t, smax+=edgemax[i].F;
        }

        cout<<smax-smin<<endl;
    }




}

