#include <iostream>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
ii v[40];
int main()
{$
    int n, a, resp;
    char x;
    while(cin>>n)
    {
        resp = 0;
        while(n--)
        {
            cin>>a>>x;
            if(x=='D')
                v[a-30].F++;
            else
                v[a-30].S++;
        }

        for(int i = 0; i<=30; ++i)
        {
            resp+= min(v[i].F,v[i].S);
            v[i].F = v[i].S = 0;
        }

        cout<<resp<<"\n";
    }

}

