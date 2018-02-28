#include <iostream>
#include <cmath>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int a, b, x, y, v, r, r1,r2;
    double d;
    while(cin>>a>>b>>x>>y>>v>>r1>>r2)
    {
        r = r1+r2;

        a = (a-x)*(a-x) + (b-y)*(b-y);
        d = sqrt(a)+v*1.5;
        if(d<=r)
            cout<<"Y\n";
        else
            cout<<"N\n";
    }


}

