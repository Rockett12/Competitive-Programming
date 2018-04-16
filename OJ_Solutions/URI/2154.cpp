#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a,b,c,n;
    while(scanf("%d", &n)!=EOF)
    {
        scanf("%dx%d", &a,&b);
        printf("%dx%d", a*b, b-1);
        n--;
        while(n--)
        {
            scanf(" + %dx%d", &a, &b);
            if(b-1 != 1)
                printf(" + %dx%d", a*b, b-1);
            else
                printf(" + %dx", a*b);
        }
        puts("");
    }

}

