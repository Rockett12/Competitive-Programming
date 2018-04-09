
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
    cin>>n>>a>>b;
    for(int i = 0; i<n; ++i)
    {
        cin>>m;
        if(m<=a || m<=b || m*m <= a*a +b*b)
            cout<<"DA\n";
        else
            cout<<"NE\n";
    }

}

