#include <iostream>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123
#define pb push_back

using namespace std;
struct Card{
    int x,y,z;

    Card():x(0),y(0),z(0){}
    Card(int _x, int _y, int _z):x(_x),y(_y), z(_z){}
    Card operator-(const Card& c) const{return Card(x-c.x, y-c.y, z-c.z);}
    bool operator==(const Card& c) const{return x==c.x && y==c.y && z==c.z;}

};

int main()
{$
    int n, a, b, c, f=0;
    vector<Card> v, s;
    Card zero, mon, m;
    cin>>n>>a>>b>>c;
    Card prass(a,b,c);
    v.pb(prass);
    while(n--)
    {
        cin>>a>>b>>c;
        mon = Card(a,b,c);
        if(mon==prass)
            continue;
        if(!f)
            s = v;

        for(int i = 0; i<(int)v.size() && !f; ++i)
        {
            m = v[i]-mon;
            if(m==zero)
                f=1;
            else if(m.x >=0 && m.y >=0 && m.z>=0)
                s.pb(m);
        }

        if(!f)
            v = s;
    }

    if(f) cout<<"Y"<<endl;
    else cout<<"N"<<endl;

}

