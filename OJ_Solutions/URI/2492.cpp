#include <iostream>
#include <map>
#include <algorithm>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$

    map<string, int> din, dout;
    int t;
    bool f, inv;
    string a, b, c;

    while((cin>>t)&&t)
    {
        din.clear();
        dout.clear();
        f = inv = 1;
        while(t--)
        {
            cin>>a>>b>>c;

            if(f && dout.find(a)!=dout.end())
                f=0;
            else
                dout[a]=1;

            if(inv && din.find(c)!=din.end())
                inv=0;
            else
                din[c]=1;
        }

        if(!f)
            cout<<"Not a function.\n";
        else if(inv)
            cout<<"Invertible.\n";
        else
            cout<<"Not invertible.\n";
    }
}

