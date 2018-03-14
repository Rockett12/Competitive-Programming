#include <cstdio>

int main()
{
    int v[10],a,f=1;

    for(int i = 0; i<5; ++i)
        scanf("%d", v+i);

    for(int i = 0; i<5; ++i)
    {
        scanf("%d", &a);
        if(!(a^v[i]))
            f=0;
    }

    printf("%c\n", f?'Y':'N');

}

