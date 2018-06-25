#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 112345
using namespace std;
typedef pair<int,int> ii;
typedef long long int ll;
ll kni[MAXN], seq[MAXN], value[MAXN];
vector<ii> vec;
int main()
{$
    priority_queue<ll> pq;
    int n,m,k,a,b;
    ll sum, minor;
    cin>>n>>k;
    for(int i = 0; i<n; ++i)
    {
        cin>>a;
        vec.push_back({a,i});
        kni[i] = a;
    }

    for(int i = 0; i<n; ++i)
    {
        cin>>a;
        value[i] = a;
    }

    sort(vec.begin(), vec.end());
    sum = 0;
    for(int i = 0, j; i<n; ++i)
    {
        j = vec[i].S;
        seq[j] = value[j]+sum;
        sum+=value[j];
        pq.push(-value[j]);

        if((int)pq.size()>k)
            minor = -pq.top(), pq.pop(), sum-=minor;
    }

    for(int i = 0; i<n; ++i){
        if(i)
            cout<<' ';
        cout<<seq[i];
    }
    cout<<'\n';
}
