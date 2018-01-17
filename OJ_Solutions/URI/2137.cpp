#include <cstdio>
#include <algorithm>

using namespace std;
int v[1005];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; ++i)
            scanf("%d", v+i);

        sort(v, v+n);

        for(int i=0; i<n; ++i)
            printf("%04d\n", v[i]);
    }

    return 0;
}

