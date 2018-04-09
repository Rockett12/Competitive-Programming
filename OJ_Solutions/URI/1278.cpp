#include <iostream>
#include <vector>
#include <sstream>
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;

int main()
{$
    int t, n, b=0;
    string s,a;
    vector<string> v;
    stringstream ss;
    while(cin>>n && n)
    {
        getline(cin, s);
        if(b) cout<<"\n";
        b = 1;
        t= 0;
        v.clear();
        for(int i = 0; i<n; ++i)
        {
            getline(cin, s);
            ss.clear();
            ss<<s;
            ss>>s;
            a=s;
            while(ss>>s)
                a+= " "+s;

            v.pb(a);
            t = max(t, (int)a.size());
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

