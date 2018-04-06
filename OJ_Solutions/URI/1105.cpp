#include <vector>
#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;
int v[25];
int main()
{$
    int n, m,a,b,c, f;
    while(cin >>n >>m && n)
    {
        f = 1;
        for(int i = 1; i<=n; ++i)
            cin>>v[i];

        while(m--)
        {
            cin>>a>>b>>c;
            v[a]-=c;
            v[b]+=c;
        }

        for(int i =1 ;i<=n && f ;++i)
            if(v[i]<0)
                f = 0;

        if(f) cout<<"S\n";
        else cout<<"N\n";
    }
}

