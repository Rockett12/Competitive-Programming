#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 105
using namespace std;
int mat[MAXN][MAXN];
int main()
{$
    int n;
    cin>>n;

    for(int i = 0; i<=n; ++i)
        for(int j = 0; j<=n; ++j)
            cin>>mat[i][j];

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j)
        {
            if(mat[i][j] + mat[i][j+1]+mat[i+1][j]+mat[i+1][j+1]>1)
                cout<<"S";
            else
                cout<<"U";
        }
        cout<<endl;
    }
}
