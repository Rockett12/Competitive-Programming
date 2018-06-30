#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAXN 1123
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int,int > ii;
typedef vector<int> vi;
typedef vector<vi> graph;

int dp[MAXN][MAXN];
int main()
{
    int n , m, k, j;
    string s, r;
    vector<string> a, b;
    cin>>n;
    for(int j = 2; j--;)
    {
        for(int i = 0; i<n; ++i)
        {
            cin>>s;
            if(j&1)
                a.push_back(s);
            else
                b.push_back(s);
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    s = r = "";
    for(auto i : a)
        s+=i;
    for(auto i : b)
        r+=i;
    int ans = 0, tam = (int)s.size();
    for(int i = 1; i<=tam; ++i)
        for(int j = 1; j<=tam; ++j)
        {
            dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            if(s[i-1]==r[j-1])
                dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);

        }

    cout<<tam-dp[tam][tam]<<endl;
}
