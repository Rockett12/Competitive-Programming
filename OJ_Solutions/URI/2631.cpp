#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
using namespace std;

int pai[MAXN], r[MAXN];

int findS(int i)
{
    return i==pai[i]?i:pai[i]=findS(pai[i]);
}

void join(int a, int b)
{
    a = findS(a);
    b = findS(b);

    if(a==b)
        return;

    if(r[a]<r[b])
        a^=b, b^=a, a^=b;
    else if(r[a]==r[b])
        ++r[a];

    pai[b]=a;

}

int main()
{$
    int n ,m , q, TC=0, x,y;

    while(cin>>n>>m>>q)
    {
        for(int i = 1;i<=n; ++i)
            pai[i]=i, r[i]=0;

        if(TC)
            cout<<endl;
        TC=1;
        while(m--)
            cin>>x>>y, join(x,y);

        while(q--)
        {
            cin>>x>>y;

            if(findS(x)==findS(y))
                cout<<"S\n";
            else
                cout<<"N\n";
        }
    }
}
