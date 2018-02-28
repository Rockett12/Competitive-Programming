#include <iostream>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
using namespace std;
typedef pair<int, int> ii;
int dx[] = {1,0,-1,0,1,1,-1,-1,1}, mat[1003][1003];
bool saber(int x, int y)
{
    int a, b ;
    for(int i =0; i<8; ++i)
    {
        a = x+dx[i];
        b = y + dx[i+1];
        if(mat[a][b]!=7)
            return 0;
    }

    return true;
}

int main()
{$
    int n, m;
    queue<ii> q;
    cin>>n>>m;

    for(int i =1; i<=n; ++i)
    {
        for(int j = 1; j<=m; ++j)
        {
            cin>>mat[i][j];
            if(mat[i][j]==42)
                q.push(ii(i, j));
        }
    }
    ii a;
    while(!q.empty())
    {
        a = q.front(); q.pop();
        if(saber(a.F,a.S))
        {
            cout<<a.F<<" "<<a.S<<endl;
            return 0;
        }
    }

    cout<<"0 0\n";

}

