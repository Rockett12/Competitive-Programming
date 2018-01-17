#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int v[105];
int main()
{
    int n;
    double soma=0;
    scanf("%d", &n);
    for(int i=0; i<n; ++i)
    {
        scanf("%d", v+i);
        if(v[i]==0)
            continue;
        soma+= v[i]/100.0;
    }
    soma = soma/(double)n*100.0;
    printf("%.12lf\n", soma);

    return 0;
}

