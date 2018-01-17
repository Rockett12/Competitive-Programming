#include<cstdio>

int main()
{
    long long int n, a, b;
    scanf("%lld", &n);
    while(n--)
    {
        scanf("%lld %lld", &a, &b);
        if(a>b) puts(">");
        else if(a<b) puts("<");
        else puts("=");
    }
}
