#include <iostream>
using namespace std;

int main()
{
    int n, TC=1, a, resp;

    while(cin>>n && n)
    {
        for(int i = 1; i<=n; ++i)
        {
            cin>>a;
            if(a==i)
                resp = a;
        }

        cout<<"Teste "<<TC++<<'\n';
        cout<<resp<<'\n'<<'\n';
    }
}

