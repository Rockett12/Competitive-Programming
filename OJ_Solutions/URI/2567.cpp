#include <algorithm>
#include <cstdio>
#include <cmath>
#define MAXN 1005
using namespace std;

int main()
{
    int n,v[MAXN], resp;
    while(scanf("%d", &n)!=EOF)
    {
        for(int i = 0; i<n; ++i)
            scanf("%d", v+i);

        sort(v, v+n);
        resp = 0;
        for(int i = 0, j =n-1; i<j; ++i, --j)
            resp+=abs(v[i]-v[j]);

        printf("%d\n", resp);


    }
}

