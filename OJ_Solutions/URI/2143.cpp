#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int t, a;
    while((cin>>t)&&t)
    {
        while(t--)
        {
            cin>>a;

            if(a&1)
                cout<< (a<<1)-1<<endl;
            else
                cout<< (a<<1)-2 <<endl;
        }
    }
}

