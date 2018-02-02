#include <iostream>
#include <algorithm>
#include <vector>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 100005
using namespace std;

typedef pair<int, int> ii;
typedef pair<int , ii > pii;

int pai[MAXN], peso[MAXN], vis[MAXN];

void build(int n)
{
    for(int i = 1; i<=n; ++i)
        pai[i]=i;
}

int findSet(int i)
{
    return pai[i] == i? i : pai[i] = findSet(pai[i]);
}

bool join(int a, int b)
{
    a = findSet(a);
    b = findSet(b);

    if(a == b)
        return 0;

    if(peso[a]<peso[b])
        pai[b]= a;
    else
        pai[a]=b;

    return 1;
}

int main()
{_
    int n, m, smin, u, v, w;

    cin>>n>>m;

    build(n);
    long long int smax = 0;

    for(int i=1; i<=n; ++i)
    {
        cin>>peso[i];
    }


    while(m--)
    {
        cin>>u>>v;
        join(u,v);

    }
    for(int i =1; i<=n; ++i)
    {
        u = findSet(i);

        if(!vis[u])
            smax+=peso[u];
        vis[u]=1;
    }



    cout<<smax<<endl;





}

