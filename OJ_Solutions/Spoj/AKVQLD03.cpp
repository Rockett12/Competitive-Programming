#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define MAXN 1123456
#define MAXM 205
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int ,int> ii;
int n;
ll emp[MAXN];
ll get(int a)
{
    ll soma=0;
    while(a)
    {
        soma += emp[a];
        a-=(a&-a);
    }
    return soma;
}

void upd(int p, int add)
{
    while(p<=n)
    {
        emp[p]+=add;
        p+=(p&-p);
    }
}

map<string, int> mp;
int main()
{$
    int a,p,b , q;

    cin>>n>>q;
    string s;
    while(q--)
    {
        cin>>s>>a>>b;
        if(s=="find")
            cout<<get(b)-get(a-1)<<endl;
        else
            upd(a, b);
    }
}

