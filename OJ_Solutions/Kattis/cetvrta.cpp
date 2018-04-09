#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define oo 999999999
#define MAXN 112345
using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vii> graph;

int main()
{$
    int n = 0, m= 0,a,b,c;
    for(int i = 0; i<3; ++i)
    {
        cin>>a>>b;
        n^=a;
        m^=b;
    }

    cout<<n<<" "<<m<<"\n";
}


