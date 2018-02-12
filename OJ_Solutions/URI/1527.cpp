#include <iostream>
#define MAXN 100005
#define $ ios::sync_with_stdio(0);
using namespace std;
int pai[MAXN], peso[MAXN];

int findS(int i){return pai[i] == i?i:pai[i]=findS(pai[i]);}

void join(int a, int b)
{
    a = findS(a);
    b = findS(b);

    if(a==b)
        return;

    if(peso[a]>peso[b])
        pai[b]=a, peso[a]+=peso[b];
    else
        pai[a]=b, peso[b]+=peso[a];
}

int main()
{$
    int n, m, a, b, res, i;
    while((cin>>n>>m)&&n)
    {
        res=0;
        for(i = 1; i<=n; ++i)
            pai[i]=i, cin>>peso[i];

        while(m--)
        {
            cin>>n>>a>>b;

            if(n&1)
                join(a,b);
            else
            {

                a = findS(a);
                b = findS(b);
                i = findS(1);
                if(peso[a]>peso[b] && a==i || peso[b]>peso[a] && b==i)
                    ++res;
            }
        }
        cout<<res<<endl;
    }
}

