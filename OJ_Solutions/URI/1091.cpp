#include <iostream>
#include <vector>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$

    int n, i, j, c,d;
    while(cin>>n && n)
    {
        cin>>i>>j;

        while(n--)
        {
            cin>>c>>d;
            c=c-i; d=d-j;

            if(d==0 || c==0) cout<<"divisa\n";
            else if(d > 0 && c>0) cout<<"NE\n";
            else if(d > 0 && c <0) cout<<"NO\n";
            else if(d < 0 && c >0) cout<<"SE\n";
            else cout<<"SO\n";

        }
    }
}

