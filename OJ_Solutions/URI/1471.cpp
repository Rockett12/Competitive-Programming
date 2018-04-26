#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
using namespace std;
int nad[MAXN];
int main()
{$
    int n,m, a, TC=0;
    string s;
    while(cin>>n>>m)
    {
        ++TC;
        if(n==m)
        {
            getline(cin, s);
            getline(cin, s);
            cout<<'*'<<'\n';
            continue;
        }

        while(m--)
            cin>>a, nad[a] = TC;

        for(int i  = 1; i<=n; ++i)
            if(nad[i]^TC)
                cout<<i<<' ';
        cout<<'\n';
    }
}


