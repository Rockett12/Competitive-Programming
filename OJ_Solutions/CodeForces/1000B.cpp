#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAXN 112345
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long int ll;
typedef pair<ll,int > ii;
typedef vector<int> vi;
typedef vector<vi> graph;

vector<ii> b;
ll sum1[MAXN], sum2[MAXN];
int main()
{$
    int n , m, k, j;
    vector<ll> v;
    cin>>n>>m;
    v.resize(n+1);
    for(int i = 1; i<=n; ++i)
        cin>>v[i];
    ll sum = 0, ans;
    for(int i = 1; i<=n; ++i)
    {
        sum1[i] = sum1[i-1];
        sum2[i] = sum2[i-1];
        if(i&1)
            sum1[i]+=v[i]-v[i-1];
        else
        {
            sum2[i]+= v[i]-v[i-1];
            if(v[i]-v[i-1]>1LL)
                b.pb({v[i]-v[i-1], i});
        }

    }

    sum1[n+1] = sum1[n];
    sum2[n+1] = sum2[n];

    if(~n&1)
        sum1[n+1] += m-v[n];
    else
        sum2[n+1] += m-v[n];

    ans = sum1[n+1];

    for(auto i : b)
        ans = max(ans, sum1[i.S-1] + i.F-1 + sum2[n+1]-sum2[i.S]);

    ans = max(v[1]-1 +sum2[n+1]-sum2[1], ans);
    ans = max(m-v[n]-1 + sum1[n], ans);

    cout<<ans<<endl;
}
