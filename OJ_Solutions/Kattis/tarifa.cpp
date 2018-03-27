#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define oo 999999999
#define pb push_back

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> graph;

int main()
{$
    int n, m, a,b,c=0, f=1, x;
    string s;

    cin>>x>>n;

    while(n--)
        cin>>a, c+=x-a;

    cout<<c+x<<endl;
}

