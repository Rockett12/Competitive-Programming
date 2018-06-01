#include <cstdio>
int main()
{
    int n,b, a, sum=0;

    scanf("%d %d", &n, &a);

    while(--n)
    {
        scanf("%d", &b);

        if(b-a>10) sum+=10;
        else sum +=b-a;
        a = b;
    }

    printf("%d\n", sum+10);
}
