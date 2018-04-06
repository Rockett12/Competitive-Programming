#include <map>
#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define S second
#define F first
using namespace std;
typedef map<int,int> mii;
int main()
{$
    cout.setf(ios::fixed);
    cout.precision(2);
    int a, b, n,sum, cons, c=1;
    mii m;
    mii::iterator it;
    while(cin>>n && n)
    {
        sum=cons=0;
        m.clear();
        if(c!=1)
            cout<<"\n";
        while(n--)
        {
            cin>>a>>b;
            sum+=b;
            cons+=a;

            m[b/a]+=a;
        }
        cout<<"Cidade# "<<c++<<":\n";
        it = m.begin();

        cout<<it->S<<'-'<<it->F;
        advance(it, 1);
        for(; it!=m.end(); ++it)
            cout<<" "<<it->S<<'-'<<it->F;

        a = (sum/(double)cons)*100;
        cout<<"\nConsumo medio: "<<a/100.0<<" m3.\n";
    }
}
