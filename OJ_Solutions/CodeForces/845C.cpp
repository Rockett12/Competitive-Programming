#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
#define F first
#define S second
#define pb push_back
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;

int main()
{$
    int n, m, a=0 , b=0, c=1, maior=0, soma=0, mc=1;
    priority_queue<int> pq;
    pq.push(1);
    pq.push(1);
    ll tv=-1;
    cin>>n;
    vector<ii> v;
    for(int i = 0; i<n; ++i)
    {
        cin>>a>>b;
        v.pb(ii(a, b));
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<n; ++i)
    {
        if(c)
            tv = -pq.top(), pq.pop();
        a = v[i].F;
        b = v[i].S;
        if(a<=tv)
            c = 0;
        else if(c){
            tv = -b;
            pq.push(tv);
        }
    }

    if(c)cout<<"YES\n";
    else cout<<"NO\n";

}

