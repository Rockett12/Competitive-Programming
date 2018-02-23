#include <iostream>
#include <cstdio>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
using namespace std;
int b[2], pos[MAXN];
typedef long long int ll;

int main()
{
    int n, m, i;
    ll par=0, impar=0, a;
    scanf("%d %d", &n, &m);
    b[0] = -1;
    b[1] = 1;
    while(m--)
    {
        scanf("%lld", &a);
        if(a&1LL)
        {
            scanf("%lld", &a);
            par+=a;
            impar+=a;
        }
        else
        {
            par += b[(par&1LL)];
            impar += b[(!(impar&1LL))];
        }
    }

    for(i = 1; i<=n; ++i)
    {
        if((i&1))
            a = (i+impar);
        else
            a = (i+par);

        a%=n;
        while(a<0)
            a+=n;
        if(a==0)
            a = n;
        pos[a]=i;
    }

    for(i =1; i<=n; ++i)
    {
        if(i>1)
            printf(" ");
        printf("%d", pos[i]);
    }
    printf("\n");

}

