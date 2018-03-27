#include <cstdio>
#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#define MAXN 112345
#define oo 999999999
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
int main()
{$
    int n, a, b, c, k = 0, resp;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;

        k =a/3;
        c =b/3;
        cout<<k*c<<endl;
    }
}

