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
    string s;
    cin>>s;
    char x, y, z;
    int k;
    bool f = 1;
    for(int i = 1; i<(int)s.size()-1 && f; ++i)
    {
        x = s[i], y = s[i-1], z = s[i+1];
        if(x == '.' || y == '.' || z == '.') continue;
        k = (1<<(x-'A'))|(1<<(y-'A'))|(1<<(z-'A'));
        if(!(k^7))
            f = 0;
    }

    if(!f)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
