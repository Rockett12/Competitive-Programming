#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define MAXN 25
#define MAXM 205
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int ,int> ii;

map<string, int> mp;
int main()
{$
    int n, m, a;
    string s;
    cin>>n>>m;
    ll soma;
    while(n--)
    {
        cin>>s>>a;
        mp[s]=a;
    }

    while(m--)
    {
        soma = 0;
        while(cin>>s && s!=".")
                soma+=mp[s];

        cout<<soma<<endl;
    }

}

