#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 112345
using namespace std;
int v[MAXN], d[MAXN];
int main()
{$
    int n , m, i ,j;
    while(cin>>n>>m)
    {
        for(i  = 0; i<n; ++i)
            cin>>v[i];
        for(i = 0; i<m; ++i)
            cin>>d[i];

        for(i = 0, j = 0; i<n && j<m; ++i)
            if(v[i]==d[j]) ++j;

        if(j==m)
            cout<<"sim\n";
        else
            cout<<"nao\n";
    }
}
