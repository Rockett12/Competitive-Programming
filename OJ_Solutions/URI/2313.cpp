#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define pb push_back
#define F first
#define S second
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    long long int a, b, c, maior, menor, m;
    cin>>a>>b>>c;
    if(a<b+c && b<a+c && c<a+b)
    {
        if(a==b && b==c)
            cout<<"Valido-Equilatero"<<endl;
        else if(a==b || b==c || a==c)
            cout<<"Valido-Isoceles"<<endl;
        else
            cout<<"Valido-Escaleno\n";
        if(a<b) swap(a,b);
        if(a<c) swap(a,c);

        cout<<"Retangulo: ";
        if(a*a==b*b+c*c)
            cout<<"S\n";
        else
            cout<<"N\n";
    }
    else
        cout<<"Invalido\n";
}

