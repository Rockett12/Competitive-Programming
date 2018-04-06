#include <iostream>
using namespace std;
int main()
{
    double d, c, sum=0;
    int n, a , b, i=0;

    while(cin>>n>>a>>b && n)
    {
        d = n*(1+b/30.0);
        c = a*(1+b/30.0);
        d = (d+c)/2.0;
        ++i;
        if(d<13)
            cout<<"Nao vai da nao\n";
        else if(d<14)
            cout<<"E 13\n";
        else if(d<40)
            cout<<"Bora, hora do show! BIIR!\n";
        else if(d<=60)
            cout<<"Ta saindo da jaula o monstro!\n";
        else
            cout<<"AQUI E BODYBUILDER!!\n";

        sum+=d;
    }

    if(sum/(double)i>40)
        cout<<"\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n";
}

