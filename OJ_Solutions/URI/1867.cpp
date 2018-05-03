#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int getOne(string s)
{
    int n = 0, aux;

    for(int i = 0; s[i]; ++i)
        n += (int)s[i]-'0';

    while(n>9)
    {
        aux = 0;
        while(n)
        {
            aux+=n%10;
            n/=10;
        }
        n = aux;
    }

    return n;
}

int main()
{
    string n , m;
    int a, b;
    while(cin>>n>>m && (n[0]!='0' || m[0]!='0'))
    {
        a = getOne(n);
        b = getOne(m);

        if(a>b)
            cout<<"1\n";
        else if(b>a)
            cout<<"2\n";
        else
            cout<<"0\n";
    }
}

