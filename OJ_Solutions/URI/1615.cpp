#include <iostream>
#include <vector>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n, m, a,f,t;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        v.assign(n+1, 0);
        for(int i  = 1; i<=m; ++i)
        {
            cin>>a;
            ++v[a];
        }
        f = 1;
        for(int i  = 1; i<=n; ++i)
            if(v[i]>m/2)
                cout<<i<<"\n", f = 0;

        if(f)
            cout<<"-1\n";
    }
}

