#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int mes[13];
int main()
{$
    int f=1,m, d;
    mes[12]= 25;
    for(int i = 11; i>0; --i)
    {
        mes[i]+=mes[i+1];
        if(i<=7)
            f = 0;
        if(i==2)
            mes[i]+=29;
        else
            mes[i]+=30;

        if(i&1)
            mes[i]+= !f;
        else
            mes[i]+= f;
    }


    while(cin>>m>>d)
    {
        f = mes[m]-d;

        if(!f)
            cout<<"E natal!\n";
        else if(f==1)
            cout<<"E vespera de natal!\n";
        else if(f<0)
            cout<<"Ja passou!\n";
        else
            cout<<"Faltam "<<f<<" dias para o natal!\n";
    }
}
