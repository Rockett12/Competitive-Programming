#include <cstdio>

int v[20];
int main()
{
    int t,n;
    scanf("%d", &t);
    int j  = 0;
    while(t--)
    {
        scanf("%d", &n);
        for(int i = 0; i<n; ++i)
            scanf("%d", v+i);

        printf("Case %d: %d\n", ++j, v[n>>1]);
    }
}

