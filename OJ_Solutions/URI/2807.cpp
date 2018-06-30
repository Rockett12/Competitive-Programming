#include <cstdio>

int v[100];
int main()
{
    int n ;
    v[1] = v[2] = 1;
    scanf("%d", &n);
    for(int i = 3; i<=n; ++i)
        v[i] = v[i-1]+v[i-2];

    for(int i = n; i>=1; --i)
        printf("%d%c", v[i], i==1?'\n':' ');
}

