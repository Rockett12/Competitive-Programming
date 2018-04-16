#include <iostream>
#include <algorithm>
#include <vector>
#define pb push_back
#define $ ios::sync_with_stdio(0);
using namespace std;
bool vis[100];
int main()
{$
    vector<string> v;
    string s, resp="";
    char las='\0', x;
    int n , m;
    while(getline(cin, s) && (x = s[0])!='#')
    {
        v.pb(s);
        if(x!=las)
            resp+= (las = x), vis[x]=1;
    }

    for(int j,i = 0; i+1<(int)v.size(); ++i)
    {
        j = 1, n = (int)v[i].size(), m =(int)v[i+1].size();

        while(j<n && j<m && v[i][j] == v[i+1][j]) ++j;

        if(j<n && !vis[(x = v[i][j])])
            resp+=x, vis[x]=1;
    }

    cout<<resp<<"\n";
}
