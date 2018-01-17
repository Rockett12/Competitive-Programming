#include <cstdio>

int main()
{
    double n, m, i;
    int j=1;

    while(scanf("%lf %lf", &n, &m)!=EOF)
    {
        i = (m - n)/n*100.0 ;
        printf("Projeto %d:\n", j++);
        printf("Percentual dos juros da aplicacao: %.2lf %%\n\n", i);

    }
}

