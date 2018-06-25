#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#define MAXN 112
using namespace std;

char mat[MAXN][MAXN];
int dx[] = {-1,0,1,0,-1}, seen[MAXN][MAXN];
bool trav(int n , int m)
{
    int i=0, j=0,k;
    bool flag = 1;
    char x;
    while(flag)
    {
        if((x = mat[i][j]) == '*')
            return 1;
        if( x != '.')
            if(!seen[i][j]){
                if(x=='>') k = 1;
                else if(x == '^' ) k = 0;
                else if(x == '<' ) k = 3;
                else  k = 2;
            }
            else{
                flag = 0;
                continue;
            }



        seen[i][j] =1;
        i+=dx[k], j+=dx[k+1];

        if(i<0 || j<0 || i>=n || j>=m)
        {
            flag = 0;
            continue;
        }
    }

    return 0;

}

int main()
{
    ios::sync_with_stdio(0);
    int n , m;
    char x;
    cin >> m>>n;
    for(int i = 0; i<n; ++i)
    {
        for(int j = 0; j<m; ++j)
        {

            cin>>x;
            mat[i][j] = x;
        }
    }

    if(trav(n,m))
        cout<<"*\n";
    else
        cout<<"!\n";
}

