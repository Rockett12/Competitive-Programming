#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int n, m ,c, resp, seen;
    while(cin>>n)
    {
        resp = seen =  0;
        for(int i = 1; i<n; ++i)
        {
            cin>>m>>c;
            if(m==n)
            {
                seen = 1;
                if(!c)
                    ++resp;
            }
            else if(seen)
                if(c)
                    ++resp;
        }

        cout<<resp<<'\n';
    }
}

