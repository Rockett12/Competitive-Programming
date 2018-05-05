#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct Ret{
    int x,y,z,w;
    Ret(){}
    Ret(int _x,int _y, int _z, int _w):x(_x), y(_y), z(_z), w(_w){}

    bool operator^(const Ret& r) const{
        return r.x > z || r.y < w ||  r.z < x || r.w > y;
    }

    void operator+ (const Ret& r){
        x = max(x, r.x);
        z = min(z, r.z);
        w = max(w, r.w);
        y = min(y, r.y);
    }

};

int main()
{
    Ret r, s;

    int n, m=0;
    bool flag;
    while(scanf("%d", &n)!=EOF && n)
    {
        flag = 1;
        scanf("%d %d %d %d", &r.x, &r.y, &r.z, &r.w);

        while(--n){
            scanf("%d %d %d %d", &s.x, &s.y, &s.z, &s.w);

            if(r^s) flag = 0;
            else r+s;
        }
        printf("Teste %d\n", ++m);

        if(flag)
            printf("%d %d %d %d\n\n", r.x, r.y, r.z, r.w);
        else
            puts("nenhum\n");
    }


}

