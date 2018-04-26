#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
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
int dp[2][MAXN], w[MAXN], val[MAXN];

int main()
{$
    int a,b,n , k, m, u ,v;
    a=1;
    while(cin>>n>>m && n)
    {
        for(int i = 1; i<=n; ++i)
            cin>>w[i]>>val[i];

        for(int i = 1; i<=m; ++i)
            dp[0][i] = 0;

        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=m; ++j)
                dp[i&1][j] = max(dp[~i&1][j], j>=w[i]?dp[~i&1][j-w[i]]+val[i]:0);

        cout<<"Caso "<<a++<<": "<<dp[n&1][m]<<'\n';
    }
}
