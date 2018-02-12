#include <iostream>
#define MAXN 15000
#define $ ios::sync_with_stdio(0);

using namespace std;
int n, pai[MAXN],m,peso[MAXN];
void build(int a)
{
    for(int i =1; i<=a; ++i)
        pai[i]=i, peso[i]=0;
}
int findS(int i)
{
    return pai[i]==i?i:pai[i]=findS(pai[i]);
}

void join(int a, int b)
{
    a = findS(a);
    b = findS(b);
    if(a==b)
        return;

    if(peso[a]>peso[b])
        pai[b]=a;
    else
    {
        if(peso[a]==peso[b])
            ++peso[b];

        pai[a]=b;
    }
    n--;
}
int main()
{$
    int a, b, i=0;
    while((cin>>n>>m)&&n)
    {
        build(n);

        while(m--)
        {
            cin>>a>>b;
            join(a,b);

        }
        cout<<"Teste "<<++i<<endl;
        if(n==1)
            cout<<"normal\n";
        else
            cout<<"falha\n";
        cout<<endl;
    }
}

