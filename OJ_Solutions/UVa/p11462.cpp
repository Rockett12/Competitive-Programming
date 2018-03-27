#include <cstdio>
#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#define MAXN 2123456
#define oo 999999999
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

int v[MAXN];
int main()
{$
    int n, a, b, c;
    while(cin>>n && n)
    {
        for(int i = 0; i<n; ++i)
        {
            cin>>v[i];
        }

        sort(v, v+n);

        for(int i = 0; i<n; ++i)
        {
            if(i)
                cout<<" ";
            cout<<v[i];
        }
        cout<<endl;
    }

}

