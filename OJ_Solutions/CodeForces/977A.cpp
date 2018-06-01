#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <sstream>
#include <map>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define mp make_pair
#define pb push_back
#define MAXN 112345
#define oo 999999999
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;

int main()
{$
    int n,m,a,b,major, minor;
    cin>>n>>m;
    while(m--)
    {
        if(n%10==0)
            n/=10;
        else
            n--;
    }

    cout<<n<<'\n';
}
