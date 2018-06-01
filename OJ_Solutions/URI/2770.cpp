#include <cstdio>

int main()
{
    int n, m, t,x,y;
    while(scanf("%d %d %d", &n, &m, &t)!=EOF)
        while(t--)
        {
            scanf("%d %d", &x, &y);
            if(x<=n && y<= m || y<=n && x<=m)
                puts("Sim");
            else
                puts("Nao");
        }
}

