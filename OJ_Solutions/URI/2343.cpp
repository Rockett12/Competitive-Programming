#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 505
using namespace std;
bool mat[MAXN][MAXN];
int main()
{$
    int n,i,j;
    int resp=0;
    cin>>n;
    while(n--)
    {
        cin>>i>>j;
        if(mat[i][j])
            resp = 1;
        mat[i][j] = 1;
    }

    cout<<resp<<'\n';
}
