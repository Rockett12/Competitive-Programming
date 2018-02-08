#include <stdio.h>

int main()
{
    int n, v[1004], i;
    scanf("%d", &n);

    for(i = 0; i<1000; ++i)
        printf("N[%d] = %d\n", i, i%n);

    return 0;
}

