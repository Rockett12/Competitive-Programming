#include <cstdio>
#define MAXN 112345
int ft[MAXN], v[MAXN];
int main()
{
    int n, maior = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; ++i)
        scanf("%d", v+i);

    int inv = 0, x;
    for(int i = n-1; i>=0; --i)
    {
        for(x = v[i]-1; x; x-=(x&-x))
            inv+=ft[x];

        for(x = v[i]; x<=n; x+=(x&-x))
            ++ft[x];
    }

    printf("%d\n", inv);
}

