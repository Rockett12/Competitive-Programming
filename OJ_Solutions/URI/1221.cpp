#include <cstdio>

bool isprime(int x)
{
    if(x<=1)
        return 0;
    for(int i = 2; i*i<=x; ++i)
        if(x%i==0)
            return 0;
    return 1;
}
int main()
{
    int n, x;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &x);
        if(isprime(x))
            puts("Prime");
        else puts("Not Prime");
    }

}

