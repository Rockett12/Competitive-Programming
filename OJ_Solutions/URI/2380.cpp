#include <iostream>
#include <cstdio>
#define $ ios::sync_with_stdio(0);
#define MAXN 100005
using namespace std;

int pai[MAXN], peso[MAXN];

int findS(int i)
{
    return pai[i]==i?i:pai[i]=findS(pai[i]);
}

bool same(int a, int b)
{
    a = findS(a);
    b = findS(b);

    return a==b;
}

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
}

int main()
{
    int n, k,a,b ;
    char c;

    scanf("%d %d%*c", &n, &k);
    for(int i = 1; i<=n; ++i)
        pai[i]=i;

    while(k--)
    {
        scanf("%c %d %d%*c", &c, &a,&b);
        if(c=='F')
            join(a,b);
        else
        {
            if(same(a,b))
                printf("S\n");
            else
                printf("N\n");
        }

    }


}

