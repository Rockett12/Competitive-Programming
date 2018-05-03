#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int v[1500];
int main()
{$
    int t ,n ,a, pos;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pos = 0;
        for(int i = 1; i<=n; ++i)
        {
            cin>>s;
            if(s == "LEFT")
                --pos, v[i]=-1;
            else if(s=="RIGHT")
                ++pos, v[i]=1;
            else
            {
                cin>>s>>a;
                pos+=v[a];
                v[i] = v[a];
            }
        }
        cout<<pos<<'\n';
    }
}
