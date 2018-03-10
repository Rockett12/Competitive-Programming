#include <cstdio>
#include <algorithm>
#include <queue>
#include <iostream>
#define MAXN 1000000
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define pk pop_back()
#define pf pop_front()
using namespace std;
typedef long long int ll;
int main()
{$
    int t,s,n,k;
    cin>>t;
    vector<ll> v;
    ll resp, soma , ant, atual;
    deque<int> q;
    while(t--)
    {
        cin>>n>>k>>ant;
        while(!q.empty())
            q.pop_back();
        v.clear();
        v.pb(ant);
        resp = 0;
        for(int i =1; i<n; ++i)
        {
            atual = (1LL*ant*1103515245 + 12345) % (2147483648LL);
            v.pb(ant = atual);
        }

        for(int i = 0; i<k; ++i )
        {
            while(!q.empty() && v[i]>=v[q.back()])
                q.pk;

            q.pb(i);
        }

        for(int i = k; i<n; ++i )
        {
            resp+=v[q.front()];
            while(!q.empty() && q.front() <=i-k)
                q.pf;

            while(!q.empty() && v[i]>=v[q.back()])
                q.pk;

            q.pb(i);
        }
        resp+=v[q.front()];
        cout<<resp<<endl;
    }
}

