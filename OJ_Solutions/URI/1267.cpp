#include <iostream>
#include <vector>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n ,m , f,a;
    vector<int> v;
    while(cin>>n>>m && n)
    {
        v.assign(n+1, 1);
        f = 1;
        while(m--)
        {
            for(int i = 1; i<=n; ++i)
                cin>>a, v[i]&=a;
        }

        for(int i = 1; i<=n && f; ++i)
                if(v[i])
                    f = 0;

        if(f) cout<<"no\n";
        else cout<<"yes\n";
    }
}

