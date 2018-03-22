#include <map>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstdio>
#include <algorithm>
#define S second
#define F first
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define oo 999999999999999
#define MAXN 1123456
using namespace std;
typedef map<int, int> mii;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
//ll v[MAXN], sum[MAXN];
int mat[7][7];
int dx[] = {1,0,-1,0,1};
int main()
{$
    int n,m, a, b, c, k,x,y;
    string s;
    for(int i = 0;i<6; ++i)
        mat[0][i]=mat[i][0] =mat[6][i] = mat[i][6] = 1;
    cin>>n;
    queue<ii> q;

    while(n--)
    {
        for(int i =1; i<=5; ++i)
            for(int j =1; j<=5; ++j)
                cin>>mat[i][j];
        q.push(ii(1,1));
        mat[1][1]=2;
        while(!q.empty())
        {
            x = q.front().F;
            y = q.front().S;
            q.pop();
            for(int i = 0; i<4; ++i)
            {
                a = x+dx[i];
                b = y+dx[i+1];
                if(!(mat[a][b]))
                    q.push(ii(a,b)),mat[a][b]=2;
            }
        }

        if(mat[5][5]==2)
            cout<<"COPS\n";
        else
            cout<<"ROBBERS\n";
    }
}

