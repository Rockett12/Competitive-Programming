
#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
int n , m;
vi g;
bool dfs(int i)
{
    if(i==m)
        return 1;
    if(i==0)
        return 0;

    return dfs(g[i]);
}

int main()
{
    cin>>n>>m;
    int a;
    g.assign(n+1, 0);

    for(int i = 1; i<n;++i)
    {
        cin>>a;
        g[i]=i+a;
    }

    if(dfs(1))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
