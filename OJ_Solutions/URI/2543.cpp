#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n, a, b, c, i;

    while(cin>>n>>i)
    {
        c = 0;
        while(n--)
        {
            cin>>a>>b;
            if(!b)
                if(a==i)
                    c++;
        }

        cout<<c<<endl;
    }
}

