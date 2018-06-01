#include <cstdio>

int jos(int n, int k)
{
    if(n==1)
        return 1;
    return (jos(n-1, k)+k-1)%n+1;

}

int main()
{
    int t,n, k, i =0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n",++i , jos(n, k));
    }

}

