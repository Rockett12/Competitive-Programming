#include <vector>
#include <algorithm>
#include <iostream>
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define MAXN 112
using namespace std;
typedef vector<int> vi;
int marc[MAXN][MAXN], lev[MAXN][MAXN];
int main()
{$
    int n, m, l;
    while(cin>>n)
    {
        cin>>m>>l;
        for(int i = 1; i<=m; ++i)
            for(int j = 1; j<=n; ++j)
                cin>>marc[i][j];

        for(int i = 1; i<=l; ++i)
            for(int j = 1; j<=n; ++j)
                cin>>lev[i][j];

        cin>>m>>l;
        cin>>n;

        if((m = marc[m][n]) > (l = lev[l][n]))
            cout<<"Marcos\n";
        else if(m<l)
            cout<<"Leonardo\n";
        else
            cout<<"Empate\n";
    }
}

