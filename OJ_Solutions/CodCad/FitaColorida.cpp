#include <iostream>
#include <vector>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int n, a, cnt = 9;
    cin>>n;
    vector<int> v(n+1, 9);

    for(int i = 0; i<n; ++i)
    {
        cin>>a;
        if(!a)
            cnt=0;
        v[i] = min(v[i],cnt++);
    }

    for(int i = n-1; i>=0; --i)
    {
        if(!v[i])
            cnt = 0;
        v[i] = min(v[i], cnt++);
    }

    for(int i = 0; i<n; ++i)
    {
        if(i)
            cout<<" ";
        cout<<v[i];
    }
    cout<<endl;

}
