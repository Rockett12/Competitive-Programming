#include <cstdio>

int main()
{
    int n, a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a<b)
        a^=b, b^=a, a^=b;
    if(a<c)
        a^=c, c^=a, a^=c;

    if(a<b+c)
        if(a*a == b*b + c*c)
            puts("r");
        else if(a*a > b*b + c*c)
            puts("o");
        else
            puts("a");
    else
        puts("n");
}

