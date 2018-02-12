#include <iostream>
#define MAXN 105
#define $ ios::sync_with_stdio(0);

using namespace std;

int n, pai[MAXN], peso[MAXN];

int findS(int i){return pai[i] == i? i: pai[i]=findS(pai[i]);}

void join(int a, int b)
{
    a = findS(a);
    b = findS(b);

    if(a==b)
        return;

    if(peso[a]>peso[b])
        pai[b]=a;
    else
    {
        if(peso[a]==peso[b])
            ++peso[b];
        pai[a]=b;
    }
    n--;
}

int main()
{$
    int k=0, t, a, b,m;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        for(int i =1; i<=n; ++i)
            pai[i]=i, peso[i]=0;

        while(m--)
        {
            cin>>a>>b;
            join(a,b);
        }

        cout<<"Caso #"<<++k<<": ";
        if(n==1)
            cout<<"a promessa foi cumprida\n";
        else
            cout<<"ainda falta(m) "<<n-1<<" estrada(s)\n";
    }
}

