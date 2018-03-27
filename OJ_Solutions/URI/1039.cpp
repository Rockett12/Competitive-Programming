#include <iostream>
#include <cmath>
#define $ ios::sync_with_stdio(0);
using namespace std;

typedef long long int type;
class TVector{
public:
    type x,y;

    TVector(){}
    TVector(type _x, type _y){x = _x; y = _y; }
    TVector operator- (TVector p) const{return TVector(x-p.x, y-p.y);}
    int operator* (TVector p) const{return x*p.x + y*p.y;}
};

int main()
{
    type r1, b, c, r2, a, d;
    TVector p, q;
    while(cin>>r1>>a>>b>>r2>>c>>d)
    {
        p = TVector(a, b);
        q = TVector(c, d);

        if(sqrt((p-q)*(p-q))+r2<=r1)
            cout<<"RICO\n";
        else
            cout<<"MORTO\n";
    }
}

