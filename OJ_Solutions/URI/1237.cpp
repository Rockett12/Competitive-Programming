#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define MAXN 55
#define $ ios::sync_with_stdio(0);
using namespace std;

int dp[MAXN][MAXN];

int main()
{$
    int n,m, k;
    string a,b;
    while(getline(cin ,a))
    {
        getline(cin, b);
        n = (int)a.size();
        m = (int)b.size();
        k = 0;
        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=m; ++j)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j] = i==1||j==1 ? 1 : dp[i-1][j-1]+1;
                    k = max(k, dp[i][j]);
                }
                else
                    dp[i][j]=0;
            }

        cout<<k<<"\n";
    }
}

