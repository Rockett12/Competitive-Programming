
#include<iostream>
#include <fstream>
#include <cmath>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int a, b, r, q, f=0;

    cin>>a>>b;
    f=0;
    if(a*b>0)
        f = 1;
    if(f)
        b = abs(b);

    r = a%b;
    if(r < 0)
        r+=b;

    q = (a-r)/b;
    if(f)
        q = abs(q);

    cout<<q<<" "<<r<<endl;


}
