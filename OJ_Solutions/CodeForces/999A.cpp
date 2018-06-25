#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#define MAXN 1123
#define $ ios::sync_with_stdio(0);
#define INF 0x3f3f3f3f
using namespace std;
int p[MAXN];
int main()
{$
    int n , m , ans = 0;
    char x;
    cin >>n>>m;
    for(int i = 0; i<n; ++i)
        cin>>p[i];
    bool flag = 1;
    for(int i = 0, j = n-1; i<=j && flag;)
    {
        if(m>=p[i])
            ++i, ++ans;
        else if(m>=p[j])
            --j, ++ans;
        else flag = 0;
    }

    cout<<ans<<endl;
}
