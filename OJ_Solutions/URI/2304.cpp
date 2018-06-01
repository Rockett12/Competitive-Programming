#include <iostream>
#include <vector>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$

    int n , m, j;
    char x, c;
    cin>>n>>m;
    vector<int> v(3,n);
    while(m--)
    {
        cin>>x;
        if(x=='C')
        {
            cin>>c>>n;
            v[c-'D']-=n;
        }
        else if(x=='V')
        {
            cin>>c>>n;
            v[c-'D']+=n;
        }
        else
        {
            cin>>c>>x>>n;
            v[c-'D']+=n;
            v[x-'D']-=n;
        }
    }
    cout<<v[0];
    for(int i = 1; i<3 ; ++i)
        cout<<' '<<v[i];
    cout<<'\n';
}

