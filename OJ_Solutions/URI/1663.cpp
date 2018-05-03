#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 112345
using namespace std;
int v[MAXN];
int main()
{$
    int n;
    bool f;
    while(cin>> n && n)
    {
        for(int i = 1; i<=n; ++i)
            cin>>v[i];

        f = 1;
        for(int i = 1; i<=n && f; ++i)
            if(i!=v[v[i]])
                f = 0;

        if(f) cout<<"ambiguous\n";
        else cout<<"not ambiguous\n";
    }
}

