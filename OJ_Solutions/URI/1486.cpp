#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define oo 999999999
#define pb push_back

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> graph;
int mat[1005][1005];
int main()
{$
    int n, m, a,b,c=0, f=0, x, tam;
    string s;
    while(cin>>a>>b>>c && a)
    {
        f = 0;
        for(int i = 0; i<b; ++i)
            for(int j = 0; j<a; ++j)
                cin>>mat[i][j];

        for(int i = 0; i<a; ++i)
        {
            tam = 0;
            for(int j = 0; j<b; ++j)
                if(mat[j][i])
                    tam++;
                else
                {
                    if(tam>=c)
                        f++;
                    tam = 0;
                }

            if(tam>=c)
                f++;
        }

        cout<<f<<endl;
    }
}
