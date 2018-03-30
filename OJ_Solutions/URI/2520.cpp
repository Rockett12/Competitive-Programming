#include <iostream>
#include <cmath>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{
    int n, m,x,a,b,c,d;

    while(cin>>n>>m)
    {
        for(int i = 0; i<n; ++i)
            for(int j = 0; j<m; ++j)
            {
                cin>>x;
                if(x&1)
                    a = i, b = j;
                else if(x==2)
                    c = i, d = j;
            }

        cout<<abs(a-c)+abs(b-d)<<endl;
    }
}

