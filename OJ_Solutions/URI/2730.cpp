#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <set>
#define F first
#define S second
#define oo 999999999
#define pb push_back
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
#define MAXM 1123456
using namespace std;

typedef long long int ll;
typedef pair<int , int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vii> graph;

int v[205],s[205], TC=0, visto[200];
int main()
{$
    string a,b;
    set<ii> ss;
    int n, j, sp, f;
    char cob[15]="cobol0000", x;
    while(cin>>n && n)
    {
        ss.clear();
        for(int i = 0; i<n;++i)
            cin>>v[i];

        for(int i = 0; i<n;++i)
            cin>>s[i];

        for(int i = 0; i<n;++i)
            for(int j = 0; j<n;++j)
                if( __gcd(v[i],s[j])==1)
                    ss.insert(ii(v[i],s[j])),
                    ss.insert(ii(s[j],v[i]));

        cout<<ss.size()<<endl;

    }
}
