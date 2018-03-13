#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#define F first
#define S second
#define oo 999999999.9
#define pb push_back
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
#define MAXM 1123456
using namespace std;

typedef long long int ll;
typedef pair<double , string> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vii> graph;

int main()
{$
    string s;
    int n, j, x, sp, f;
    char let[] = "0abcdefghijklmnopqrstuvwxyz";
    while(cin>>n)
    {
        getline(cin, s);
        while(n--)
        {
            sp = x = 0;
            f = 1;
            getline(cin, s);
            for(int i =0; i<(int)s.size(); ++i)
            {
                if(s[i]==' ')
                    ++sp, f=0;
                else if(f && s[i]=='.')
                    x++;
            }

            cout<<let[x+3*sp]<<endl;

        }
    }
}
