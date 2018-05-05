#include <cstdio>
#define MAXN 11234
int v[MAXN];
int main()
{
    int n,m,major, minor,a,b=0, soma;
    while(scanf("%d %d", &n, &m)!=EOF && n)
    {
        soma = 0;
        for(int i = 1; i<=m; ++i)
        {
            scanf("%d", v+i);
            soma+=v[i];
        }
        major = minor = soma;

        for(int i = m+1; i<=n; ++i)
        {
            scanf("%d", v+i);
            soma+=v[i]-v[i-m];
            if(soma>major)
                major = soma;
            if(soma <minor)
                minor = soma;
        }

        printf("Teste %d\n",++b);
        printf("%d %d\n\n", minor/m, major/m);

    }
}

