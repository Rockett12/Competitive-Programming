#include <stdio.h>
#include <string.h>
int main()
{
    long long int v[100];
    int n, a, b;
    v[1]=0;
    v[2]=1;
    for(a = 3; a<18; ++a)
    {
        if(a&1)
            v[a] = v[a-1]+v[a-2];
        else
            v[a] = v[a-1]*v[a-2];
    }


    while(scanf("%d", &n)!=EOF)
    {
        printf("%lld\n", v[n]);
    }




    return 0;
}
