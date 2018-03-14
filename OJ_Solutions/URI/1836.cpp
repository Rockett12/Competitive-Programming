#include <cstdio>
#include <cmath>
#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int lvl;
int calc(int bs, int iv, int ev)
{
    double att=0.0;

    att = (iv+bs+sqrt(ev)/8.0+50)*lvl/50.0+10;

    return (int)att;
}

int atri(int bs, int iv, int ev)
{
    double att=0.0;

    att = (iv+bs+sqrt(ev)/8.0)*lvl/50.0+5;

    return (int)att;
}

int  main()
{$
    int n,ev, iv,b,a=1, v[10];
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s>>lvl;
        cin>>b>>iv>>ev;
        v[0] = calc(b,iv,ev);
        for(int i = 1; i<4;++i)
        {
            cin>>b>>iv>>ev;
            v[i] = atri(b,iv,ev);
        }

        cout<<"Caso #"<<a++<<": "<<s<<" nivel "<<lvl<<endl;
        cout<<"HP: "<<v[0]<<endl;
        cout<<"AT: "<<v[1]<<endl;
        cout<<"DF: "<<v[2]<<endl;
        cout<<"SP: "<<v[3]<<endl;
    }

}

