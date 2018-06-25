#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>
#include <cmath>
#include <queue>
#define MAXN 112345
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;

int main()
{$
    int n , m, op;
    string s;
    cin>>n>>m;
    cin>>s;
    bool f = 0;
    for(int i = 0; i+m < n && !f; ++i)
    {
        if(s[i]!=s[i+m])
        {
            if((f = 1) && s[i]=='.')
                s[i] = s[i+m]^1;
            else if(s[i+m]=='.')
                s[i+m] = s[i]^1;
        }
        else if(s[i]=='.' && s[i+m] == '.')
            s[i] = '1', s[i+m] = '0', f = 1;
    }

    if(f)
    {
        for(int i = 0; i<n; ++i)
            if(s[i] == '.')
                cout<<'0';
            else
                cout<<s[i];
        cout<<'\n';
    }
    else
        cout<<"No\n";
}
