#include <cstdio>
#include <algorithm>
using namespace std;
int v[105];
int main()
{
    int n , m, a, ib;
    while(scanf("%d %d", &n, &m)!=EOF && n)
    {
        ib = -1;

        for(int i = 0; i<n; ++i)
            scanf("%d", &a), v[a]++, ib=max(ib, a);

        a = 0;
        for(int i  = 1; i<=ib; ++i)
        {
            if(v[i]>=m)
                ++a;

            v[i]=0;
        }


        printf("%d\n", a);
    }
}

