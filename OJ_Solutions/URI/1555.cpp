#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    int n,a,b,c,x ,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        a = 9*x*x + y*y;
        b = 2*x*x + 25*y*y;
        c = -100*x + y*y*y;

        if(a>b && a>c)
            cout<<"Rafael ganhou\n";
        else if(b>c)
            cout<<"Beto ganhou\n";
        else
            cout<<"Carlos ganhou\n";
    }
}

