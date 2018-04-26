#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int q,d,p;

    while(cin>>q && q)
    {
        cin>>d>>p;
        d = p*q*d/abs(p-q);

        if(d==1)
            cout<<"1 pagina\n";
        else
            cout<<d<<" paginas\n";
    }
}
