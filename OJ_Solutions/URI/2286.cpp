#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int n,x,y , i=0;
    string a, b;
    while(cin>> n && n)
    {
        cin>>a>>b;
        cout<<"Teste "<<++i<<'\n';
        while(n--)
        {
            cin>>x>>y;
            x+=y;
            if(x&1)
                cout<<b<<'\n';
            else
                cout<<a<<'\n';
        }

        cout<<'\n';
    }
}

