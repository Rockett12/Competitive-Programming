#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct TVector{
    int x, y;
    TVector(){}
    TVector(int _x, int _y):x(_x),y(_y){}
    TVector operator-(const TVector& p) const{return TVector(x-p.x, y-p.y);}
    int norma()const {return x*x+y*y;}
};
int main(){

    TVector a, b;
    int n, m, x,y, ind;
    int mnor;
    cin>>n;
    while(n--)
    {
        cin>>m>>a.x>>a.y;
        ind = 1;
        mnor = 999999999;
        for(int i = 1; i<=m; ++i)
        {
            cin>>b.x>>b.y;
            b = b-a;
            if(b.norma()<mnor)
                ind = i, mnor = b.norma();
        }
        cout<<ind<<"\n";
    }
}

