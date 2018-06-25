#include <iostream>
#include <vector>
#include <cstdio>
#include <queue>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define MAXN 112
using namespace std;
bool v[MAXN];

int main()
{
    int n, m , k,resp, a;
    scanf("%d %d %d", &n, &m, &k);
    resp = m;
    while(m--)
    {
        scanf("%d", &a);
        v[a]= 1;
    }

    while(k--)
    {
        scanf("%d", &a);

        if(v[a])
        {
            --resp;
            v[a] = 0;
        }
    }

    printf("%d\n", resp);


}


