#include <cstdio>
int main()
{
    int n,m, sum, minor,a;
    scanf("%d %d", &n, &m);
    sum = minor = m;
    while(n--)
    {
        scanf("%d", &m);
        sum+=m;
        if(sum<minor)
            minor = sum;
    }

    printf("%d\n", minor);
}
