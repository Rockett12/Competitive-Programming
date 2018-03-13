#include <iostream>
#include <algorithm>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define F first
#define S second
using namespace std;
typedef pair<int, char> ii;
int main()
{$
    string s;
    vector<ii> v;
    ii a;
    bool f = 0;
    while(getline(cin, s))
    {
        if(f)
            cout<<endl;
        v.clear();
        sort(s.begin(), s.end());
        a = ii(-1,s[0]);
        for(int i = 1; i<(int)s.size(); ++i)
        {
            if(s[i]==a.S)
                a.F--;
            else
                v.pb(a), a = ii(-1, s[i]);
        }

        v.pb(a);

        sort(v.rbegin(), v.rend());

        for(int i = 0; i<(int)v.size(); ++i)
            cout<<(int)v[i].S<<" "<<-v[i].F<<endl;
        f=1;
    }
}
