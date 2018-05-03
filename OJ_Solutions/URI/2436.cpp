#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int mat[1500][1500], dx[] = {-1,0,1,0,-1};
int main()
{$
    int n , m,x, y, sum,a,b;
    cin>>n>>m>>x>>y;

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            cin>>mat[i][j];

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            if(mat[i][j])
            {
                sum = 0;
                for(int k = 0; k<4; ++k)
                    sum +=mat[i+dx[k]][j+dx[k+1]];

                if(sum<=1 && (i!=x || j!=y))
                {
                    cout<<i<<' '<<j<<'\n';
                    return 0;
                }
            }
}
