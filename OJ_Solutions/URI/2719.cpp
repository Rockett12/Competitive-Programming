#include <iostream>
using namespace std;

int main()
{
    int t, n,m,p, c,a;
    cin>>t;
    while(t--)
    {
        a=1;
        cin>>n>>m;
        p = m;
        while(n--)
        {
            cin>>c;
            if(p-c<0)
                ++a, p = m-c;
            else
                p-=c;
        }
        cout<<a<<"\n";
    }
}
