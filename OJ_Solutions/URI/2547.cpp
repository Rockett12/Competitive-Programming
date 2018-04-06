#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int n, a, b, c, d;

    while(cin>>n>>a>>b)
    {
        c=0;
        while(n--)
        {
            cin>>d;
            if(a<=d && d<=b)
                c++;
        }

        cout<<c<<endl;
    }
}

