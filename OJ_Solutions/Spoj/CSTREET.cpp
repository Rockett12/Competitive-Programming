
#include <iostream>
#include <algorithm>
#include <vector>
#define PB push_back
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 1005
#define MAXM 300005
using namespace std;
typedef pair<int ,int> pi;
typedef pair<int , pi> ii;
typedef vector<ii> edge;
typedef long long int ll;
int pai[MAXN], peso[MAXN], k;
edge g(MAXM);

void build(int n)
{
    for(int i = 1; i<=n; ++i)
        pai[i]=i, peso[i]=0;

    k = n-1;
}

int findSet(int i){return pai[i]==i?i:pai[i]=findSet(pai[i]);}

bool join(int a, int b)
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

        pai[a]= b;
    }

    k--;
    return 1;
}


int main()
{_
    int n, m, a, b, c, p, t;
    ll cost;
    cin>>t;
    while(t--)
    {
        cost = 0;

        cin>>p>>n>>m;
        build(n);
        for(int i =0; i<m ; ++i)
        {
            cin>>a>>b>>c;
            g[i]= ii(c, pi(a,b));
        }
        sort(g.begin(), g.begin()+m);
        for(int i =0;i<m && k; ++i)
        {
            if(join(g[i].S.F, g[i].S.S))
                cost+=(ll)p*g[i].F;
        }

        cout<<cost<<endl;
    }
}
