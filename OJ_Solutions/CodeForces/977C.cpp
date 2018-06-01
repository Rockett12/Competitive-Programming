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
#define MAXN 212345
#define oo 999999999
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<ll> vi;
typedef vector<vi> graph;
graph g;
int v[MAXN], r[MAXN];


int main()
{$
    int n , m, a;
    cin>>n>>m;
    bool f=1;
    for(int i = 0;i<n; ++i)
        cin>>v[i];
    sort(v,v+n);
    if(m==0)
    {
        a = v[0];
        if(a==1)
            f = 0;
        else
            a = v[0]-1;
    }
    else
    {
        a = v[m-1];
        if(v[m]==a)
            f = 0;
    }

    if(f)
        cout<<a<<endl;
    else
        cout<<-1<<endl;

}

