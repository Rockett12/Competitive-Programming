#include <iostream>

using namespace std;

int main()
{
    int n , m;

    cin>>n>>m;
    int ans=0, a, b, c;
    while(n--)
    {
        c=1;
        for(int i = 0; i<m; ++i)
        {
            cin>>a;
            c = c && a;
        }

        if(c)
            ++ans;
    }

    cout<<ans<<"\n";
}
