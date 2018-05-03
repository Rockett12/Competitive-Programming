#include <iostream>
#include <cstdio>
int coin[100];
bool isprime(int x)
{
    if(x<=1)
        return 0;
    for(int i =2; i*i<=x; ++i)
    {
        if(x%i==0)
            return 0;
    }

    return 1;
}

int main()
{
    int n,m, sum;
    while(scanf("%d", &n)!=EOF)
    {
        sum = 0;
        for(int i = 1; i<=n; ++i)
            scanf("%d", coin+i);
        scanf("%d", &m);

        for(int i = n; i>0; i-=m)
            sum+=coin[i];

        if(isprime(sum))
            puts("You’re a coastal aircraft, Robbie, a large silver aircraft.");
        else
            puts("Bad boy! I’ll hit you.");
    }
}
