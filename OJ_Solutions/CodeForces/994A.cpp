#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define F first
#define S second

using namespace std;
int c[20], ver[20];
int main()
{
    int n,u,v,w,m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i<n; ++i)
        scanf("%d", c+i);
    while(m--)
        scanf("%d", &u), ver[u]=1;

    for(int i = 0, j = 0; i<n; ++i)
    {
        if(ver[c[i]]){
            if(j)
                printf(" ");
            printf("%d", c[i]);
            j =1;
        }
    }
}
