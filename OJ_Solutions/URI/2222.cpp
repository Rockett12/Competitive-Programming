#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
using namespace std;
typedef long long int ll;

ll v[MAXN], r;
int main()
{$
    int t, n, m, a, b, ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i =1; i<=n; ++i)
            v[i]=0LL;
        for(int i = 1; i<=n ; ++i)
        {
            cin>>a;
            while(a--)
            {
                cin>>b;
                v[i]|=1LL<<b;
            }
        }
        cin>>m;
        while(m--)
        {
            cin>>n>>a>>b;
            if(n&1)
                r = v[a]&v[b];
            else
                r = v[a]|v[b];

            for(ans=0;r;r-=(r&-r), ans++);
                cout<<ans<<endl;
        }
    }
}

