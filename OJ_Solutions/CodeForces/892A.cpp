#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define pb push_back
#define MAXN 112345
#define oo 999999999
using namespace std;
typedef long long int ll;
int v[MAXN];

int main()
{$
    int t, n, q,a,b, p;
    ll soma =0, can;
    cin>>n;
    vector<int> vec;

        for(int i =0; i<n; ++i)
            cin>>a, soma+=a;
        for(int i =0; i<n; ++i)
            cin>>a, vec.pb(a);

        sort(vec.rbegin(), vec.rend());
        can = (ll)vec[0]+(ll)vec[1];
        if(can>=soma)
            cout<<"YES\n";
        else
            cout<<"NO\n";
}

