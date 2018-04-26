#include <cstdio>
int pai[105], prox[105];
int main()
{
    int n , m, u , v, j=0, k, l;
    while(scanf("%d %d", &n, &l)!=EOF && n)
    {
        u = 0;
        for(int i = 0; i<n; ++i)
        {
            scanf("%d", &v);
            prox[u]= v;
            pai[v] = u;
            u = v;
        }

        prox[u] = 0;
        pai[0] = u;
        u = 0;
        while(l--)
        {

            scanf("%d %d", &n, &m);
            for(int i = 0; i<n; ++i)
            {
                u = prox[u];

                if(!u)
                    u = prox[u];

                scanf("%d", &v);
                if(v^m)
                {
                    v = prox[u];
                    k = pai[u];
                    prox[k] = v;
                    pai[v] = k;

                }
            }
        }

        printf("Teste %d\n%d\n\n",++j, prox[0]);
    }
}
