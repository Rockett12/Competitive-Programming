#include <iostream>
#include <algorithm>
#define F first
#define S second
#define MAXN 112345
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<char, string> ii;
typedef pair<int, ii> pp;
pp v[MAXN];
int main()
{$
    int q;
    while(cin>>q)
    {
        for(int i = 0 ; i <q; ++i)
        cin>>v[i].S.S>>v[i].S.F>>v[i].F;

        sort(v, v+q);
        for(int i = 0 ; i <q; ++i)
            cout<<v[i].S.S<<'\n';
    }
}
