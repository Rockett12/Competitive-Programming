#include <cstdio>
#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#define MAXN 112345
#define oo 999999999
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
int main()
{$
    int n, a, b, c, k = 0, resp, i;
    string s, aux, ss;
    char x;
    map<int, ii> mp;
    ii u;
    while(cin>>c>>n)
    {
        s.assign(c,'0');
        resp = k = 0;
        mp.clear();
        while(n--)
        {
            cin>>x;
            if(x=='C')
            {
                cin>>a>>b;

                aux.assign(b, '0');
                ss.assign(b, 'x');

                if((i = (int)s.find(aux))!=s.npos)
                    s.replace(i, b,  ss), mp[a]=ii(i, b), resp++;

            }
            else
            {
                cin>>a;
                u = mp[a];
                aux.assign(u.S, '0');
                s.replace(u.F, u.S, aux);
            }
        }

        cout<<resp*10<<endl;
    }
}
