#include <iostream>
#include <algorithm>
#include  <vector>
#define _ ios::sync_with_stdio(0);
#define MAXN 505
#define F first
#define S second


using namespace std;
typedef pair< int, int > ii;
typedef pair<int, ii> pii;

int pai[MAXN], peso[MAXN];

int findSet(int i)
{
    return pai[i] == i ? i : pai[i] = findSet(pai[i]);
}

bool join(int a, int b)
{
    a = findSet(a);
    b = findSet(b);

    if(a == b)
        return 0;
    if(peso[a]>peso[b])
        pai[b] = a;
    else
    {
        if(peso[a]==peso[b])
            ++peso[b];

        pai[a] = b;
    }

    return 1;
}

int main()
{_
    int n, m, soma=0;
    int a, b, p;

    vector<pii> edges;

    cin>>n>>m;
    for(int i = 1; i<=n; ++i) pai[i]=i;
    for(int i = 0; i<m; ++i)
    {
        cin>>a>>b>>p;
        edges.push_back(pii(p, ii(a,b)));
    }

    sort(edges.begin(), edges.end());

    for(int i = 0, j =1; i<m || j<n; ++i)
    {
        if(join(edges[i].S.F, edges[i].S.S))
           ++j, soma+=edges[i].F;
    }

    cout<<soma<<endl;

}

