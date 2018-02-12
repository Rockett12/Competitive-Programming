#include <iostream>
#include <map>
#define $ ios::sync_with_stdio(0);
#define MAXN 200005

using namespace std;
typedef map<int,int> mp;
int pai[MAXN], peso[MAXN], k;

int findS(int i){return pai[i]==i?i:pai[i]=findS(pai[i]);}

void join(int a, int b)
{
    if(a==b)
        return;

    if(peso[a]>peso[b])
        pai[b] = a;
    else
    {
        if(peso[a]==peso[b])
            ++peso[b];
        pai[a]=b;
    }

    k--;
}

int main()
{
    int n, m, i=0,b, a;
    cin>>n>>m;
    k = n;
    mp fox;
    while(m--)
    {
        cin>>a>>b;
        if(fox.find(a)==fox.end())
            fox[a]=++i, peso[i]=0, pai[i]=i;
        if(fox.find(b)==fox.end())
            fox[b]=++i, peso[i]=0, pai[i]=i;

        a = findS(fox[a]);
        b = findS(fox[b]);

        join(a,b);
    }
    cout<<k<<endl;
}

