#include <iostream>
#include <stack>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    stack<int> p;

    int n, k, ini , fim, f;
    while(cin>>n>>k && n)
    {
        while(!p.empty())
            p.pop();
        f=1;
        while(n--)
        {
            cin>>ini>>fim;

            while(!p.empty() && p.top()<=ini)
                p.pop();
            if(!p.empty() && fim > p.top())
                f=0;

            p.push(fim);

            if((int)p.size()>k)
                f =0;
        }

        if(f)
            cout<<"Sim\n";
        else
            cout<<"Nao\n";
    }
}
