#include <iostream>
#define MAXN 100005
#define $ ios::sync_with_stdio(0);

using namespace std;
int pai[MAXN], k, peso[MAXN];

int findS(int i){return pai[i]==i?i:pai[i]=findS(pai[i]);}

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
        pai[a]=b;
        if(peso[a]==peso[b])
            ++peso[b];
    }
    k--;
}

int main()
{$
    int n, m, a;
    cin>>n>>m;
    k =n;
    for(int i = 1; i<=n; ++i)
        pai[i] = i;

    while(m--)
    {
        cin>>a>>n;
        join(a,n);
    }

    cout<<k<<endl;
}
