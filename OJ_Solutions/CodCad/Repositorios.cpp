#include <map>
#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef map<int, int> mii;

int main()
{$
    mii mp, m;

    int c, n,a,b;
    cin>>c>>n;
    while(c--)
        cin>>a>>b, mp[a]=b;

    while(n--)
        if(cin>>a>>b && b>mp[a])
            mp[a]=b, m[a]=b;

    for(mii::iterator it = m.begin(); it!=m.end(); ++it)
        cout<<it->first<<" "<<it->second<<endl;
}

