#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
#define oo 999999999
#define pb push_back
using namespace std;

int main()
{$
    int t, n, m, men;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        cin>>n>>m;
        men = -1;
        v.clear();
        v.pb(0);
        for(int i =0, a; i<m; ++i)
        {
            cin>>a;
            v.pb(a);
        }
        v.pb(n);

        sort(v.begin(), v.end());

        for(int i = 1; i<(int)v.size() && v[i]<=n; ++i)
        {
            men = max(men, abs(v[i-1]-v[i]));
        }

        cout<<men<<endl;
    }
}

