#include <cstdio>
int main()
{
    int n, i =0;
    while(scanf("%d", &n)!=EOF && n)
    {
        printf("Teste %d\n", ++i);
        printf("%d ", n/50), n%=50;
        printf("%d ", n/10), n%=10;
        printf("%d ", n/5), n%=5;
        printf("%d\n\n", n/1);
    }
}

