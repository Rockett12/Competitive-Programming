#include <cstdio>

int main()
{
    int a, b, n,pa,pb;

    while(scanf("%d", &n)&&n)
    {
        pa = pb = 0;
        while(n--)
        {
            scanf("%d %d", &a, &b);
            if(a>b)
                pa++;
            else if(b>a)
                pb++;
        }

        printf("%d %d\n", pa, pb);

    }
}

