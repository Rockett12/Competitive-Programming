#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    int n, u, r, i, a, b, c, m;

    while(cin>>n && n)
    {
        u = r = i = 0;
        while(n--)
        {
            cin>>a>>b>>c;
            m = max(a,max(b,c));

            if((a&(a-1))==0)
            {
                if(a == m)
                    u++;
                u++;
            }

            if((b&(b-1))==0)
            {
                if(b == m)
                    r++;
                r++;
            }

            if((c&(c-1))==0)
            {
                if(c == m)
                    i++;
                i++;
            }
        }

        if(u>r && u>i)
            cout<<"Uilton\n";
        else if(r>u && r>i)
            cout<<"Rita\n";
        else if(i>u && i>r)
            cout<<"Ingred\n";
        else
            cout<<"URI\n";
    }
}

