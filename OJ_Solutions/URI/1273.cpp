#include <iostream>
#include <sstream>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;

int main()
{$
    int n, t, a=0;
    vector<string> v;
    string s;
    while(cin>>n && n)
    {
        v.clear();
        t=0;
        if(a) cout<<"\n";
        a = 1;
        while(n--)
        {
            cin>>s;
            t = max(t, (int)s.size());
            v.pb(s);
        }

        for(int i = 0; i<(int)v.size(); ++i)
        {
            n = t - (int)v[i].size();
            while(n--)
                cout<<" ";
            cout<<v[i]<<"\n";
        }


    }
}
