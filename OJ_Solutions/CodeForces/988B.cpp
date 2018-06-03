#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <iostream>
#define MAXN 1123
#define $ ios::sync_with_stdio(0);
using namespace std;
const int INF = 0x3f3f3f3f;

int seen[MAXN], TC=0;
vector<string> v;

bool comp(string a, string b){return a.size() < b.size();}

int main()
{
    int n;
    string s;
    cin>>n;

    for(int i = n; i--;)
    {
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), comp);

    bool flag = 1;
    for(int  i = 1; i<n && flag; ++i)
        if(v[i].find(v[i-1]) == string::npos)
            flag = 0;

    if(flag)
    {
        cout<<"YES\n";
        for(string a : v)
            cout<<a<<'\n';
    }
    else
        cout<<"NO\n";
}

