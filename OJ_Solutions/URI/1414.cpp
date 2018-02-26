
#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int t,n,a, res;
    string s;

    while((cin>>t>>n)&&t)
    {
        n*=3;
        res = 0;

        while(t--)
        {
            cin>>s>>a;
            res+=a;
        }

        cout<<n-res<<endl;
    }

}
