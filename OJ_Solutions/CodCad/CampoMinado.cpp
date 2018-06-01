#include <cstdio>
int resp[55],v[55];
int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i)
        scanf("%d", v+i);

    for(int i = 1; i<=n; ++i)
        resp[i] = v[i-1]+v[i]+v[i+1];

    for(int i = 1; i<=n; ++i)
        printf("%d\n", resp[i]);
}

