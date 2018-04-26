#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <stack>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define MAXN 1010
#define MAXM 55
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
long long int dp[2][5][5][5];
int dx[] = {-1,0,1,0,-1,1,1,-1,-1}, dz[]={-1,0,1};

void roda(int n)
{
    long long int soma;
    for(int r = 1; r<=n; ++r)
    {
        for(int i = 0; i<3; ++i)
        for(int j = 0; j<3; ++j)
        for(int k = 0; k<3; ++k)
        {
            soma = 0;
            for(int o = 0, z; o<3; ++o)
            {
                z = i+dz[o];
                if(z<0 || z>=3)
                    continue;

                soma += dp[~r&1][z][j][k];

                for(int p = 0,x,y; p<8; ++p)
                {
                    x = j+dx[p];
                    y = k+dx[p+1];
                    if(x<0 || y<0 || x>=3 || y>=3)
                        continue;

                    soma += dp[~r&1][z][x][y];
                }
            }
            dp[r&1][i][j][k] = soma;
        }
    }
}

int main()
{$
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i<3; ++i)
            for(int j = 0; j<3; ++j)
                for(int k = 0; k<3; ++k)
                    cin>>dp[0][i][j][k];
        roda(n);

        for(int i = 0; i<3; ++i)
            for(int j = 0; j<3; ++j)
            {
                for(int k = 0; k<3; ++k)
                {
                    if(k) cout<<' ';
                    cout<<dp[n&1][i][j][k];
                }
                cout<<'\n';
            }
    }
}
