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

using namespace std;
typedef long long int ll;
typedef pair<int ,int> ii;

int w[MAXN] = {1,1,2,2,2,8}, dp[MAXM];
int main()
{
    int t, n, m,a,b,c;
    string s;
    for(int i = 0; i<6; ++i)
        scanf("%d", dp+i);

    for(int i = 0; i<6; ++i)
    {
        if(i)
            printf(" ");
        printf("%d", w[i]-dp[i]);
    }

}

