#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
int main()
{
    int n, a, b, c;
    vector<iii> v;
    vector<string> vs;
    string s;
    char x;
    iii u;
    while(cin>>n)
    {
        v.clear();
        vs.clear();
        for(int i = 0; i<n; ++i)
        {
            scanf("%d %d=%d", &a, &b, &c);
            v.pb(mp(mp(a,b), c));
        }

        for(int i = 0; i<n; ++i)
        {
            cin>>s>>a>>x;
            u = v[a-1];
            a = u.F.F+u.F.S == u.S;
            b = u.F.F-u.F.S == u.S;
            c = u.F.F*u.F.S == u.S;

            if(x=='+' && !a || x=='-' && !b ||x=='*'&& !c || x=='I' && (a || b || c))
                vs.pb(s);
        }

        if((int)vs.size()==n)
            cout<<"None Shall Pass!\n";
        else if(vs.empty())
            cout<<"You Shall All Pass!\n";
        else
        {
            sort(vs.begin(), vs.end());
            for(int i = 0; i<(int )vs.size(); ++i)
            {
                if(i) cout<<" ";
                cout<<vs[i];
            }
            cout<<endl;
        }
    }
}
