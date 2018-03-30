#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define mp make_pair
#define F first
#define S second
#define MAXN 11234
using namespace std;
typedef pair<int,int> ii;
ii dg[MAXN];
int main()
{$
    int n, m, f=1, a, b;
    while(cin>>n>>m && n)
    {
        for(int i = 1; i<=n; ++i)
            dg[i] = mp(0, i);

        while(m--)
        {
            cin>>a>>b;
            dg[a].F--;
            dg[b].F--;
        }

        sort(dg+1, dg+n+1);

        cout<<"Teste "<< f++ <<endl;

        a = 1;
        while(a<=n && dg[a].F ==dg[1].F)
            cout<<dg[a++].S<<" ";
        cout<<endl<<endl;
    }
}

