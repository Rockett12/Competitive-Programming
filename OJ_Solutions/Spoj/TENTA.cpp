#include <iostream>
#include <algorithm>
using namespace std;
int v[10];
int main()
{
    int n;
    bool f=0;
    while(cin>>n && n)
    {
        if(f) cout<<'\n';
        f = 1;

        for(int i = 0; i<n; ++i)
            cin>>v[i];

        sort(v, v+n);

        do
        {
            cout<<v[0];
            for(int i = 1; i<n; ++i)
                cout<<' '<<v[i];
            cout<<'\n';
        }
        while(next_permutation(v,v+n));

    }
}
