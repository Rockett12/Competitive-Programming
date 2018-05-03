#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int n, m=0,soma, maior, ini, fim, x, y,a,b;

    while(scanf("%d", &n)!=EOF && n)
    {
        ini = fim = 1, soma = maior = x = y = 0;
        for(int i = 1; i<=n; ++i)
        {
            scanf("%d %d", &a,&b);
            soma+=a-b;
            if(soma<0)
                ini = fim = i+1, soma = 0;
            else
                fim = i;

            if(soma>maior || soma==maior && fim-ini >= y-x)
                maior = soma, y = fim, x = ini;
        }
        printf("Teste %d\n", ++m);
        if(x > n || maior == 0)
            puts("nenhum\n");
        else
            printf("%d %d\n\n", x, y);
    }

}
