#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define MAXN 99999
#define MAXM 99999
#define pb push_back

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;

int main()
{$
    ll n, m , a, b, c, x, y;
    int sum = 0;
    cin>>a>>b;

    while(a && b)
    {
        if(a>=2*b)
            a%=2*b;
        else if(b>=2*a)
            b%=2*a;
        else
            break;

    }

    cout<<a<<" "<<b<<endl;

}
