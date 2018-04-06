#include <iostream>
using namespace std;
#define MAXN 999999
int main()
{
    string s, r;
    int n,a,b,m;

    while(cin>>n && n)
    {
        m = MAXN;
        while(n--)
        {
            cin>>s>>a>>b;
            if(a-b<m)
                r = s, m = a-b;
        }

        cout<<r<<"\n";
    }
}

