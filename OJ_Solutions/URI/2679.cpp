#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    if(n&1) ++n;
    else n+=2;
    printf("%d\n", n);
}

