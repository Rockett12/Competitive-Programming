#include <iostream>
#include <cstdio>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define oo 999999999
#define pb push_back

using namespace std;
typedef long long int ll;

struct TVector{
    int x, y;
    TVector(){}
    TVector(int _x, int _y):x(_x), y(_y){}

    TVector operator+(const TVector& p)const{ return TVector(x+p.x, y+p.y);}
    TVector operator-(const TVector& p)const{ return TVector(x-p.x, y-p.y);}
    int operator*(const TVector& p)const{ return x*p.x + y*p.y;}
    int operator^(const TVector& p)const{ return x*p.y - y*p.x;}
};

int main()
{
    int n, m,c,a,b;
    TVector v[105], p[105];
    int som,are,sm1,sm2,sm3;
    ll resp;
    TVector q,r,s, in;

    while(scanf("%d %d", &n, &m)!=EOF)
    {

        resp= 0;
        for(int i = 0; i<n; ++i)
            scanf("%d %d", &v[i].x, &v[i].y);

        for(int i = 0; i<m; ++i)
            scanf("%d %d", &p[i].x, &p[i].y);

        for(int i = 0; i<n-2; ++i)
        {
            q = v[i];
            for(int j = i+1; j<n-1; ++j)
            {
                r = v[j];
                for(int k = j+1; k<n; ++k)
                {
                    som=0;
                    s = v[k];
                    for(int h = 0; h<m; ++h)
                    {
                        in = p[h];
                        are = abs((r-q)^(s-q));
                        sm2 = abs((in-q)^(s-q));
                        sm3 = abs((r-q)^(in-q));
                        sm1 = abs((r-in)^(s-in));

                        if(are == sm2+sm1+sm3)
                            ++som;
                    }
                    resp+=som*som;
                }
            }
        }
        printf("%lld\n", resp);
    }
}

