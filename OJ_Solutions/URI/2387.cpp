#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
int main()
{$
    int n, t= 0,a,b, resp=0;
    vector<ii> v;
    cin>>n;
    for(int i = n; i--;)
    {
        cin>>a>>b;
        v.push_back(ii(b,a));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<n; ++i)
    {
        if(v[i].S>=t)
            ++resp, t = v[i].F;
    }

    cout<<resp<<'\n';

}
