#include <iostream>
#include <map>
#define $ ios::sync_with_stdio(0);
#define MAXN 200005
using namespace std;
typedef map<string, int> mp;

int peso[MAXN], pai[MAXN];
mp m;
int findS(int i){return pai[i]==i?i:pai[i]=findS(pai[i]);}

int join(int a, int b)
{

    if(a==b)
        return peso[a];
    if(peso[a]>peso[b])
        pai[b]=a;
    else
        pai[a]=b;

    peso[a]+=peso[b];
    return peso[b] = peso[a];
}

int main()
{$
    int t, n, i, x, y;

    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=0;
        m.clear();
        while(n--)
        {
            cin>>a>>b;
            if(m.find(a)==m.end())
                m[a]=++i, pai[i]=i, peso[i]=1;
            if(m.find(b)==m.end())
                m[b]=++i, pai[i]=i, peso[i]=1;

            x = m[a] = findS(m[a]);
            y = m[b] = findS(m[b]);
            cout<<(join(x, y))<<endl;
        }
    }
}

