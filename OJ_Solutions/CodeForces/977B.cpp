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
    int n , a,major=0, minor;

    map<string, int> m;
    string s,b;
    cin>>n;
    cin>>s;

    for(int i = 1; i<(int )s.size(); ++i)
    {
        b= "";
        b+=s[i-1];
        b+=s[i];
        m[b]++;
    }
    b = "";
    for(auto p : m)
        if(p.S>major)
            b = p.F, major = p.S;

    cout<<b<<'\n';
}
