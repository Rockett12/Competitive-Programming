#include <map>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstdio>
#include <algorithm>
#define S second
#define F first
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define oo 999999999999999
#define MAXN 1123456
using namespace std;
typedef map<int, int> mii;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
int mat[15][15];
int dx[] = {1,0,-1,0,1};
int main()
{
    int n,m, a, b, c, k,x,y;
    scanf("%d", &n);
    while(n--)
    {

        for(int i = 1; i<=9; i+=2)
            for(int j = 1; j<=i; j+=2)
                scanf("%d", &mat[i][j]);

        for(int i = 9; i>=3; i-=2)
            for(int j = 2; j<i; j+=2)
                mat[i][j] = (mat[i-2][j-1] -(mat[i][j-1]+mat[i][j+1]))/2;

        for(int i = 2; i<=8; i+=2)
            for(int j = 1; j<=i; j++)
                mat[i][j] = mat[i+1][j]+mat[i+1][j+1];

        for(int i = 1; i<=9; i++)
            for(int j = 1; j<=i; j++)
                printf("%d%s", mat[i][j], j==i?"\n":" ");

    }
}

