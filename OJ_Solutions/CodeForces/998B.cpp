#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#define F first
#define S second
#define INF 0x3f3f3f3f
#define MAXN 112
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef long long int ll;

int v[MAXN], odd[MAXN],even[MAXN], seen[MAXN][MAXN][MAXN], dp[MAXN][MAXN][MAXN], TC=0;

int solve(int be, int en, int m){

    int ans = 0;
    if (be>=en)
        return 0;
    if(seen[be][en][m]==TC)
        return dp[be][en][m];

    for(int i = be+1, k; i+1<=en; ++i)
        if(odd[i]-odd[be-1]==even[i]-even[be-1] && odd[en]-odd[i]==even[en]-even[i] &&  (k = abs(v[i]-v[i+1]))<=m)
            ans = max(ans,1+max(solve(be, i, m-k), solve(i+1, en, m -k)));

    seen[be][en][m] = TC;
    return dp[be][en][m] = ans;
}

int main()
{
    int n, m, k,a,b,c;
    scanf("%d %d", &n, &m);
    ++TC;
    for(int i = 1; i<=n; ++i)
        scanf("%d",v+i), odd[i] = (v[i]&1)+odd[i-1], even[i] = (~v[i]&1)+even[i-1];

    printf("%d\n", solve(1,n, m));
}
