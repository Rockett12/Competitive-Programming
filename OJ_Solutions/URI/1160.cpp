#include <stdio.h>



int main()
{
    int n, v[1004], i;
    int a, b;
    double ga, gb;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %lf %lf", &a, &b, &ga, &gb);
        ga = 1+ga/100.0;
        gb = 1+gb/100.0;
        for(i = 0; i<=100; ++i)
        {
            if(a>b)
                break;

            a*=ga;
            b*=gb;
        }

        if(i>100)
            printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", i);
    }



    return 0;
}

