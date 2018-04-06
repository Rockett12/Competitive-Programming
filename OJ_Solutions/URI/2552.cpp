#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 112
using namespace std;

int mat[MAXN][MAXN],dx[] = {1,0,-1,0,1};

int main()
{
    int n, m, a,b,c;
    while(cin>>n>>m)
    {
        for(int i = 0; i<n; ++i)
            for(int j = 0; j<m; ++j)
                cin>>mat[i][j];

        for(int i = 0; i<n; ++i){
            for(int j = 0; j<m; ++j)
                if(mat[i][j])
                    cout<<"9";
                else
                {
                    c = 0;
                    for(int k = 0; k<4; ++k)
                    {
                        a = i+dx[k];
                        b = j+dx[k+1];
                        if(a<0 || b<0 || a==n || b==m)
                            continue;
                        c+=mat[a][b];
                    }
                    cout<<c;
                }

            cout<<endl;
        }
    }
}

