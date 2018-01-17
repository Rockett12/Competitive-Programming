#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k,a, b, cont;

    while(scanf("%d", &k)!=EOF)
    {
        cont = 0;
        for(int i = 1; i<=k; ++i)
        {
            a = k+i;

            if((k*a)%(k-a)==0)
                    ++cont;
        }
        printf("%d\n", cont);
        for(int i = 1; i<=k; ++i)
        {
            a = k+i;
            b = (k*a)/(a-k);

            if((k*a)%(k-a)==0)
                    printf("1/%d = 1/%d + 1/%d\n",k, b, a);
        }
    }




}


