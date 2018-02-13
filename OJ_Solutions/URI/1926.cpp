#include <iostream>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
using namespace std;
int composto[MAXN], gemeos[MAXN];

void crivo()
{
    composto[0]=1;
    composto[1]=1;
    int n = MAXN;
    for(int i =3; i*i<=n; i+=2)
    {
        if(!composto[i])
        {
            for(int j=i*i; j<=n; j+=(i<<1))
            {
                composto[j]=1;
            }
        }
    }
    for(int i =1; i<1000010; ++i)
    {
        if(i&1)
            gemeos[i]+=gemeos[i-1]+(!composto[i] && !composto[i+2] || !composto[i] && !composto[i-2]);
        else
            gemeos[i] = gemeos[i-1];
    }
}
int main()
{$
    int q, x, y;
    cin>>q;
    crivo();
    while(q--)
    {
        cin>>x>>y;
        if(x>y) x^=y, y^=x, x^=y;
        cout<<gemeos[y]-gemeos[x-1]<<endl;
    }
}
