#include <iostream>
#include <algorithm>
#include <set>
#define $ ios::sync_with_stdio(0);
#define MAXN 312
using namespace std;
int mat[MAXN][MAXN];
int main()
{$
    int n, a, b;
    cin>>n;
    set<int> s;
    for(int i = 1; i<=n ; ++i)
        for(int j = 1; j<=n ; ++j)
            cin>>mat[i][j];

    n*=2;

    while(n--)
    {
        cin>>a>>b;
        s.insert(mat[a][b]);
    }

    cout<<(int)s.size()<<"\n";
}

