#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;
int main()
{$
    int n, comp=0;
    cin>>n;
    char x;
    string s;
    vector<string> v;
    for(int i = 0; i<n; ++i)
    {
        cin>>x>>s;
        if(x=='+')
            ++comp;
        v.pb(s);
    }

    sort(v.begin(), v.end());
    for(int i = 0; i<(int)v.size();++i)
        cout<<v[i]<<endl;

    cout<<"Se comportaram: "<<comp<<" | Nao se comportaram: "<<n-comp<<endl;
}

