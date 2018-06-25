#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <sstream>
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define S second
#define F first
#define MAXN 112345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
typedef long long int ll;

map<int,int> mp;
int main()
{
    int t, n , m,ans=0,a,b,c,d;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        if(!a)
            continue;
        if(!mp[a])
            ++ans;
        mp[a]=1;
    }

    printf("%d\n", ans);
}
