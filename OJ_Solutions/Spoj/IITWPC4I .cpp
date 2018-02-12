#include <iostream>
#include <algorithm>
#include <vector>
#define MAXN 100005
#define pb push_back
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, pi> ii;
typedef vector<ii> edge;
int pai[MAXN], peso[MAXN], st[MAXN], TC=0;

int findS(int i){return pai[i] == i?i:pai[i]=findS(pai[i]);}

bool join(int a, int b)
{
    a = findS(a);
    b = findS(b);
    if(st[a]==TC && st[b] == TC)
        return 0;
    if(a==b)
        return 0;
    if(peso[a]>peso[b])
        pai[b]=a;

    else
    {
        if(peso[a]==peso[b])
            ++peso[b];
        pai[a]=b;

    }

    if(st[a]==TC || st[b]==TC)
        st[b]=TC, st[a]=TC;

    return 1;
}

int main()
{$
    int t, n, m, a, b, f;
    ll w, cost;
    cin>>t;
    edge g;
    while(t--)
    {
        ++TC;
        cin>>n>>m;
        g.clear();
        cost = 0;
        f=0;
        for(int i = 1; i<=n; ++i)
        {
            pai[i] = i;
            peso[i]=0;
            cin>>a;
            if(a)
                f = st[i] = TC;
        }


        for(int i =0; i<m; ++i)
        {
            cin>>a>>b>>w;
            g.pb(ii(w, pi(a,b)));
        }
        if(!f)
        {
            cout<<"impossible\n";
            continue;
        }
        a = n;
        sort(g.begin(), g.end());
        for(int i =0; i<m && n!=1; ++i)
        {
            if(join(g[i].S.F, g[i].S.S))
            {
                cost+=g[i].F, n--;
            }
        }

        if(n==1)
        {
            cout<<cost<<endl;
            continue;
        }
//        cout<<a<<endl;
        for(int i =1; i<=a; ++i)
            if(st[pai[i]]!=TC)
            {
                f = 0;
//                cout<<i<<endl;
                break;
            }

        if(f)
            cout<<cost<<endl;
        else
            cout<<"impossible\n";
    }
}
