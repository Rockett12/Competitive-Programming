#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
char mat[1500][1500];
int dx[] = {-1,0,1,0,-1,1,1,-1,-1};
int main()
{$
    int n , m , t, p,x,y,sum,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>p;

        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=m; ++j)
                cin>>mat[i][j];

        while(p--)
        {
            cin>>x>>y;
            sum = 0;
            for(int i =0; i<8; ++i)
            {
                a = x+dx[i];
                b = y+dx[i+1];
                if(a<1 || b<1 || a>n || b>m) continue;

                if(mat[a][b]=='T')
                    ++sum;
            }

            if(sum>=5)
                cout<<"GRRR\n";
            else
                cout<<"GG IZI\n";
        }

    }
}

