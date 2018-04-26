#include <cstdio>
using namespace std;

int v[1010];
int main()
{
    int n,m,k, b;
    while(scanf("%d %d %d", &n, &m, &k)!=EOF && n)
    {
        for(int i = 0 ;i<n; ++i)
            scanf("%d", v+i);

        m%=n;
        printf("%d\n", v[(k-m-1+n)%n]);
    }

}
