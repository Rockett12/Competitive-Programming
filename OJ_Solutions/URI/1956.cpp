#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#define F first
#define S second
#define MAXN 10004
#define PB push_back

using namespace std;
typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, pi> ii;
typedef vector<ii> edge;
int pai[MAXN], peso[MAXN], n, k;
edge e;
void build()
{
    for(int i = 1; i<=n; ++i)
        pai[i]=i;

    k = n;
}

int findSet(int i){return pai[i]==i?i: pai[i] = findSet(pai[i]);}

bool join(int a , int b)
{
    a = findSet(a);
    b = findSet(b);

    if(a==b)
        return 0;

    if(peso[a]>peso[b])
        pai[b]=a;

    else{
        if(peso[a]==peso[b])
            peso[b]++;

        pai[a]=b;
    }
    k--;
    return 1;
}

int main()
{
    scanf("%d", &n);

    k = n;
    int b,a;
    ll cost = 0, w;
    build();
    for(int i =1; i<=n-1; ++i)
    {
        scanf("%d", &b);

        while(b--)
        {
            scanf("%d %lld", &a, &w);
            e.PB(ii(w, pi(i, a)));
        }
    }

    sort(e.begin(), e.end());

    for(int i = 0; i<(int)e.size(); ++i){

        if(join(e[i].S.S, e[i].S.F))
            cost+=e[i].F;
    }

    printf("%d %lld\n", k, cost);
}

