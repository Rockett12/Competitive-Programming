#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
using namespace std;
typedef long long int ll;

ll ft[MAXN], sum;
int main()
{$
    int n, l, r, val, t, m,x ;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(int i = 1; i<=n; ++i)
            ft[i]=0;

        while(m--)
        {
            cin>>l>>r>>val;

            for(x = l+1; x<=n; x+=(x&-x))
                ft[x]+=val;
            for(x = r+2; x<=n; x+=(x&-x))
                ft[x]-=val;
        }

        cin>>m;

        while(m--)
        {
            sum = 0;
            cin>>r;
            for(x = r+1; x; x-=(x&-x))
                sum+=ft[x];

            cout<<sum<<endl;
        }
    }
}

