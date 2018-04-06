#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    unsigned long long int a, b;
    int ans;
    while(cin>> a>>b && (a||b))
    {
        for(ans=0, a^=b; a; a-=(a&-a), ++ans);
        cout<<ans<<"\n";
    }
}

