#include <cstdio>
int main()
{
    int n, j = 0;
    while(scanf("%d", &n)!=EOF && n)
        printf("Teste %d\n%d\n\n", ++j, (1<<n)-1);
}
