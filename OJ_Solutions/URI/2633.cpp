#include <map>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstdio>
#include <algorithm>
#define S second
#define F first
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define oo 999999999
#define MAXN 112345
using namespace std;
typedef map<int, int> mii;
typedef long long int ll;
typedef pair<int, string> ii;
typedef vector<ii> vi;
typedef vector<vi> graph;
int main()
{$
    int n, a, b, c, k;
    string s;
    vi v;
    while(cin>>n)
    {
        v.clear();
       while(n--)
           cin>>s>>b, v.pb(ii(b,s));

       sort(v.begin(), v.end());

       for(int i = 0; i<(int)v.size(); ++i)
       {
            if(i)
                cout<<" ";
            cout<<v[i].S;
       }

       cout<<endl;
    }


}
