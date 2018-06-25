#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#define MAXN 1123
#define $ ios::sync_with_stdio(0);
#define INF 0x3f3f3f3f
using namespace std;
int p[MAXN];
int main()
{$
    set<int> ss;
    int n , m , ans = 0;
    string s;
    cin >>n>>s;
    for(int i = 1; i*i<=n; ++i)
    {
        if(n%i==0)
        {
            ss.insert(n/i);
            ss.insert(i);
        }
    }

    for(auto i : ss)
        reverse(s.begin(), s.begin()+i);

    cout<<s<<endl;
}

