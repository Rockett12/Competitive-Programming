#include<vector>
#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n, m, a;
    vector<int> v;
    while(cin>>n>>m)
    {
        v.clear();
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }

        sort(v.rbegin(),  v.rend());

        while(m--)
        {
            cin>>a;
            cout<<v[a-1]<<endl;
        }
    }
}

