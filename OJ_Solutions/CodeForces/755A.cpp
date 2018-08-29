#include <cstdio>
int main()
{
    int n;
    scanf("%d", &n);
    if(n&1)
        puts("3");
    else
        printf("%d\n", n>4? n-2: n+2);
}

