#include <iostream>
#include <algorithm>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define MAXN 112345
using namespace std;
int v[MAXN];
int main()
{$
    int n, m, mini = 999999999;
    cin>>n>>m;
    for(int i = 0; i<n; ++i) cin>>v[i];

    sort(v, v+n);
    for(int i = 0, j = n-m-1; j<n; ++i, ++j)
        if(v[j]-v[i]<mini)
            mini = v[j]-v[i];
    cout<<mini<<'\n';
}

