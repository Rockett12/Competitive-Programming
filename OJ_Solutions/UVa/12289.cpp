#include <cstdio>

int main()
{
    int n, a, b;
    int i;
    char c[10], d[10] = "two";
    scanf("%d", &n);
    while(n--)
    {
        a=0;
        scanf(" %s", c);
        for(i=0; c[i]!='\0'; ++i);

        if(i>3) puts("3");
        else
        {
            for(i=0; c[i]!='\0'; ++i)
            {
                if(c[i]==d[i]) ++a;
            }
            if(a>=2) puts("2");
            else puts("1");
        }
    }
}
